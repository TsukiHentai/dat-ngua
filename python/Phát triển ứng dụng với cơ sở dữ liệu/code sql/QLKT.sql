create database QLKT
go
use QLKT
go
create table SanPham
(
	MaSP char(20) primary key,
	TenSP nvarchar(100),
	MoTa nvarchar(100),
	DonGia float check(DonGia>0),
	XuatXu nvarchar(100)
)
create table ChiTietHD
(
	MaHD int,
	SoLuong int check(SoLuong>0),
	GiaBan float check(GiaBan>0),
	MaSP char(20)
)
drop table HDBan
create table HDBan
(
	MaHD int primary key identity(1,1) ,
	MaNV char(20),
	NgayBan datetime
)
create table NhanVien
(
	MaNV char(20) primary key,
	TenNV nvarchar(100),
	NgaySinh datetime,
	Phai nvarchar(10),
	DiaChi nvarchar(100),
	SDT char(20)
)
alter table ChiTietHD add constraint FK_ChiTietHD_SanPham foreign key(MaSP) references SanPham(MaSP);
alter table ChiTietHD add constraint FK_ChiTietHD_HDBan foreign key(MaHD) references HDBan(MaHD);
alter table HDBan add constraint FK_NhanVien_HDBan foreign key(MaNV) references NhanVien(MaNV);
-- Câu 2:
select SanPham.TenSP, SanPham.XuatXu, SanPham.DonGia, ChiTietHD.SoLuong from SanPham inner join ChiTietHD on SanPham.MaSP=ChiTietHD.MaSP group by SanPham.TenSP, SanPham.XuatXu, SanPham.DonGia, ChiTietHD.SoLuong having ChiTietHD.SoLuong=(select SUM(ChiTietHD.SoLuong) from ChiTietHD)
-- Câu 3:
create view ThongTin as select SanPham.TenSP, HDBan.NgayBan, NhanVien.TenNV, SanPham.DonGia, ChiTietHD.SoLuong, (ChiTietHD.SoLuong*SanPham.DonGia) as 'Thanh Tien' from ChiTietHD inner join SanPham on ChiTietHD.MaSP=SanPham.MaSP inner join HDBan on ChiTietHD.MaHD=HDBan.MaHD inner join NhanVien on HDBan.MaNV=NhanVien.MaNV group by SanPham.TenSP, HDBan.NgayBan, NhanVien.TenNV, SanPham.DonGia, ChiTietHD.SoLuong
