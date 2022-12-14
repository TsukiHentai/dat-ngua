--Câu 1:
--1.Tạo cơ sở dữ liệu tên dbQLYDUAN
create database dbQLYDUAN
go
use dbQLYDUAN
go
create table PhongBan
(
	MaPB char(3) not null,
	TenPB nvarchar(50) not null,
	DiaDiem nvarchar(100), 
	constraint PK_PhongBan primary key (MaPB)
)
go
create table NhanVien
(
	MaNV char(5) not null,
	TenNV nvarchar(50) not null,
	NgaySinh date not null,
	ChuyenMon nvarchar(50),
	MaPB char(3),
	constraint PK_NhanVien primary key (MaNV),
	constraint FK_NhanVien_PhongBan foreign key(MaPB) references PhongBan(MaPB)
)
go
create table DuAn
(
	MaDA char(4)not null,
	TenDA nvarchar(50) not null,
	DiaDiem nvarchar(100) not null,
	constraint PK_DUAN primary key (MaDA)
)
go
create table PhanCong
(
	MaNV char(5) not null,
	MaDA char(4) not null,
	constraint PK_PhanCong primary key (MaNV,MaDA),
	constraint FK_PhanCong_NhanVien foreign key (MaNV) references NhanVien(MaNV),
	constraint FK_PhanCong_DUAN foreign key (MaDA) references DuAn(MaDA)
)
go
--Câu 2: Chèn dữ liệu vào bảng
insert into PhongBan values('PKT',N'Phòng Kỹ Thuật',N'Phòng 303 - Tầng 3, nhà B6');
insert into PhongBan values('PKD',N'Phòng Kinh Doanh',N'Phòng 205 - Tầng 2, nhà B6');
insert into PhongBan values('PNS',N'Phòng Nhân Sự',N'Phòng 202 - Tầng 2, nhà A5');
insert into PhongBan values('PTK',N'Phòng Thiết Kế',N'Phòng 101 - Tầng 1, nhà A5')
go
insert into NhanVien values('NV001',N'Trần Văn An','1991-03-20',N'Kỹ sư Điện','PKT');
insert into NhanVien values('NV002',N'Vũ Văn Hùng','1989-09-30',N'Kỹ sư Cơ khí','PKT');
insert into NhanVien values('NV003',N'Trần Văn Cường','1997-05-30',N'Cử nhân Kinh tế','PKD');
insert into NhanVien values('NV004',N'Vũ Văn Minh','1998-05-07',N'Kỹ sư Tin học','PTK');
insert into NhanVien values('NV005',N'Vũ Duy Tuấn','1995-06-08',N'Kiến trúc sư','PTK');
insert into NhanVien values('NV006',N'Trần Anh Cường','1996-05-20',N'Cử nhân Kế toán','PKD')
go
insert into DuAn values('DA01',N'Thiết kế nội thất',N'Khách sạn Hoàng Gia');
insert into DuAn values('DA02',N'Lắp đặt hệ thống điện',N'Tòa nhà An Khánh');
insert into DuAn values('DA03',N'Sửa chữa thang máy',N'Cao ốc Minh Phú')
go
insert into	PhanCong values('NV001','DA02');
insert into	PhanCong values('NV001','DA03');
insert into	PhanCong values('NV002','DA02');
insert into	PhanCong values('NV002','DA03');
insert into	PhanCong values('NV004','DA01');
insert into	PhanCong values('NV005','DA01')
go
--Viết câu lệnh sửa ngày sinh của nhân viên có mã là 'NV004' thành
--sinh ngày '1998-05-30' vùa sửa chuyên môn thành 'Kỹ sư Công Nghệ thông tin'
update NhanVien set NgaySinh='1998-05-30',ChuyenMon=N'Kỹ sư Công nghệ thông tin' where(MaNV='NV004')
go
--Viết câu lệnh sửa tên dự án có mã là 'DA02' thành 'Lắp đặt hệ thống chiếu 
--sáng' và địa điểm thành 'Khu đô thị VINHOMES'
update DuAn set TenDA=N'Lắp đặt hệ thống chiếu sáng',DiaDiem=N'Khu đô thị VINHOMES' where(MaDA='DA02')
go
--Liệt kê các nhân viên họ 'Vũ' và có trình độ chuyên môn là 'Kỹ sư'.
select * from NhanVien where(TenNV like N'Vũ %') and (ChuyenMon like N'Kỹ sư %')
--Liệt kê các nhân viên họ 'Trần' và làm việc tại phòng ban có mã là 'PKD'
select * from NhanVien where(TenNV like N'Trần %') and (MaPB='PKD')
--Liệt kê các nhân viên làm việc cho phòng ban có mã là 'PKD' và sinh tháng 5
select * from NhanVien where(MaPB='PKD') and (MONTH(NgaySinh)=5)
--Liệt kê các nhân viên có trình độ chuyên môn là 'Kỹ sư' và sinh trước năm 1995
select * from NhanVien where(ChuyenMon like N'Kỹ sư %') and (YEAR(NgaySinh)<1995)
--Xác định xem dự án có mã 'DA03' hiện có bao nhiêu nhân viên làm việc.
select count(*) as SoNhanVien from PhanCong where(MaDA='DA03')
--Xác định xem nhân viên có mã là 'NV001' hiện tham gia bao nhiêu dự án
select count(*) as SoDAThamGia from PhanCong where(MaNV='NV001')
--Xác định xem có bao nhiêu nhân viên sinh tháng 5
select COUNT(*) as SoNVSinhThang5 from NhanVien where(MONTH(NgaySinh)=5)