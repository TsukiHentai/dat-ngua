create database tuan3
go
use tuan3
go
create table NhapHang
(
	NhapHangID nvarchar(10),
	NgayNhap datetime,
	NCCID nvarchar(10),
	TongTien int,
	TongThueVAT int,
	DaTra int,
	ConLai int,
	HTTTID int,
	NguoiGiaoHang nvarchar(50),
	NhanVienID nvarchar(10),
	KhoaSo nvarchar(10),
	constraint PK_NhapHang primary key (ID)
)
create table NhapHangChitiet
(
	ID nvarchar(10),
	NhapHangID nvarchar(10),
	MatHangID nvarchar(10),
	SoLuong int,
	GiaGoc int,
	Chietkhau float,
	GiaNhap int,
	GiamGia float,
	ThanhTien int,
	ThueVAT int,
	DangDonViTinhID nvarchar(20),
	KhoHangID nvarchar(10),
	GhiChu nvarchar(10),
	PhanLoai nvarchar(10),
	constraint PK_NhapHangChiTiet primary key (ID)
)
alter table NhapHangChiTiet add constraint FK_NhapHangChiTiet_NhapHang foreign key (NhapHangID) references NhapHang(NhapHangID)

-- tao trigger
if exists (select name from sysobjects where
name = 't_tinhThanhTienChiTietHoaDonNhap'
and type = 'TR')
drop trigger t_tinhThanhTienChiTietHoaDonNhap
go
create trigger t_tinhThanhTienChiTietHoaDonNhap
on NhapHangChiTiet for insert,update
as
declare @ID int
select @ID = @ID from Inserted
update NhapHangChitiet set ThanhTien=SoLuong*GiaNhap
where ID=@ID
-- tao trigger 2


create trigger