create database ChamCongSanPham
go
use ChamCongSanPham
go
create table ChamCong
(
	ID int NOT NULL,
	Ngay datetime NOT NULL,
	MaCN nvarchar(50) NOT NULL,
	MaSP nvarchar(50) NOT NULL,
	SoSP int NOT NULL,
	constraint PK_ChamCong primary key (ID)
)
create table SanPham
(
	MaSP nvarchar(50) NOT NULL,
	TenSP nvarchar(100) NOT NULL,
	DonGia numeric(18,0) NOT NULL,
	MoTa nvarchar(150),
	TongSoSP int,
	constraint PK_SanPham primary key(MaSP)
)
create table ToCongNhan
(
	MaTo nvarchar(20) NOT NULL,
	TenTo nvarchar(100) NOT NULL,
	SoCN int,
	constraint PK_ToCongNhan primary key(MaTo)
)
create table CongNhan
(
	MaCN nvarchar(50) NOT NULL,
	TenCN nvarchar(50) NOT NULL,
	NgaySinh datetime NOT NULL,
	NgayVao datetime,
	MaTo nvarchar(20) NOT NULL,
	TongTienCong numeric(18,0),
	constraint PK_CongNhan primary key(MaCN)
)
alter table ChamCong add constraint FK_ChamCong_SanPham foreign key (MaSP) references SanPham(MaSP)
alter table ChamCong add constraint FK_ChamCong_CongNhan foreign key (MaCN) references CongNhan(MaCN)
alter table CongNhan add constraint FK_CongNhan_ToCongNhan foreign key (MaTo) references ToCongNhan(MaTo)
--Viết một hàm để sinh mã công nhân theo nguyên tắc: phần đầu là mã tổ công nhân, 
--tiếp theo là số thứ tự của công nhân trong tổ đó (ví dụ: MAY001, MAY002,..). Áp 
--dụng để chèn mã công nhân mỗi khi thêm mới công nhân vào trong bảng 
--CongNhan.
create function f_MaCN(@MaTo nvarchar(20)) returns nvarchar(50)
as
begin
declare @So int
declare @MaCN nvarchar(50)
select @So = CONVERT(numeric,RIGHT(max(MaCN),3))+1 from CongNhan where MaTo=@MaTo
if @So<10
set @MaCN=@MaTo+'00'+CONVERT(varchar(1),@So)
else
if @So<100
set @MaCN=@MaTo+'0'+CONVERT(varchar(2),@So)
else
set @MaCN=@MaTo+CONVERT(varchar(3),@So)
return @MaCN
end
--Viết thủ tục cho biết kết quả sản phẩm làm được theo ngày (Từ ngày – Đến ngày) 
--với các thông tin: Ngày, Tên Công nhân, Tên SP, Số SP, Đơn giá, Tiền công.
create procedure ChamCongTheoNgay
@TuNgay datetime,
@DenNgay datetime
as
select Ngay, TenCN, TenSP, SoSP, DonGia, SoSP*DonGia as TienCong from ChamCong
inner join SanPham on ChamCong.MaSP=SanPham.MaSP inner join CongNhan on ChamCong.MaCN=CongNhan.MaCN
where CONVERT(varchar(10),Ngay,102)between CONVERT(varchar(10),@TuNgay,102)and CONVERT(varchar(10),@DenNgay,102)
--Gọi thủ tục:
declare @NgayBD datetime
declare @NgayKT datetime
set @NgayBD=getdate()-3
set @NgayKT=getdate()
exec ChamCongTheoNgay @NgayBD, @NgayKT
--Tạo một hàm cho biết những công nhân (Mã CN, Tên CN) làm được nhiều sản 
--phẩm nhất theo mã sp, tháng/năm truyền vào từ tham số của hàm.
create function CongNhanNhieuSanPhamNhatTheoThang (@Thang int, @Nam int, @MaSP nvarchar(50))
returns table
as
return (select top 1 with ties ChamCong.MaCN, TenCN from ChamCong inner join CongNhan on ChamCong.MaCN=CongNhan.MaCN
where MONTH(Ngay)=@Thang and YEAR(Ngay)=@Nam and MaSP=@MaSP
group by ChamCong.MaCN, TenCN order by SUM(SoSP)desc)
--Goi truy van tu ham:
select*from dbo.CongNhanNhieuSanPhamNhatTheoThang(8,2015,'SP001')
--Tạo một hàm để thống kê tổng số sản phẩm làm được theo tháng/năm truyền vào 
--từ tham số của hàm (Tháng, Năm, Mã SP, Tên SP, Số SP, Đơn giá, Tổng tiền 
--công).
create function
