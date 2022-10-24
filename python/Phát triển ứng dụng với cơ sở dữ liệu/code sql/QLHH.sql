create database QLHH
go

use QLHH
go
create table NhaCungCap
(
	MaCongTy char(20) primary key,
	TenCongTy nvarchar(100),
	DiaChi nvarchar(100),
	DienThoai char(20)
)
create table MatHang
(
	MaHang char(20) primary key,
	TenHang nvarchar(100),
	DonVi nvarchar(20),
	DonGia float check(DonGia > 0),
	MaCongTy char(20),
	SoLuong int check(SoLuong>0)
)
create table Nhanvien
(
	MaNV char(20) primary key,
	TenNV nvarchar(100),
	NgaySinh datetime,
	SDT char(20)
)
create table PhieuNhap
(
	ID int identity(1,1) primary key,
	MaHang char(20),
	MaNV char(20),
	SoLuongNhap int check(SoLuongNhap>0),
	NgayNhap datetime
)
alter table MatHang add constraint Fk_MatHang_NhaCungCap foreign key(MaCongTy) references NhaCungCap(MaCongTy);
alter table PhieuNhap add constraint FK_PhieuNhap_MatHang foreign key(MaHang) references MatHang(MaHang);
alter table PhieuNhap add constraint FK_PhieuNhap_NhanVien foreign key(MaNV) references NhanVien(MaNV);
--Câu 2: