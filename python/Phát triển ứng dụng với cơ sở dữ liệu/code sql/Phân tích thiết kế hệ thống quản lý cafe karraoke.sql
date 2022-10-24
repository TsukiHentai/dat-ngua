CREATE DATABASE QUANLYKARAOKE
go
USE QUANLYKARAOKE

GO

CREATE TABLE NguoiQuanLy
(
	TenQL nvarchar(50) primary key,
	SDT int,
	Email nvarchar(100),
	GhiChu nvarchar(100),
)



CREATE TABLE NhanVien
(
	MaNV varchar(20)primary key,
	TenNV nvarchar(50),
	GioiTinh nvarchar(10),
	NgaySinh datetime,
	SDT int,
	Email nvarchar(100),
	DiaChi nvarchar(100),
	GhiChu nvarchar(100),
	TenQL nvarchar(50)
)


CREATE TABLE KhachHang
(
	MaKH varchar(20)primary key,
	TenKH nvarchar(50),
	SDT int,
	GhiChu nvarchar(100),
	TenQL nvarchar(50)
)


CREATE TABLE NhaCungCap
(
	MaNCC varchar(20)primary key,
	TenNCC nvarchar(50),
	Email nvarchar(100),
	DiaChi nvarchar(100),
	SDT int,
	GhiChu nvarchar(100),
	TenQL nvarchar(50),
	MaMH varchar(20)
)

CREATE TABLE DichVu
(
	MaDV varchar(20)primary key,
	TenDV nvarchar(50),
	GhiChu nvarchar(100),
	TenQL nvarchar(50)
)

CREATE TABLE MatHang
(
	MaMH varchar(20)primary key,
	TenMH nvarchar(50),
	SoLuong float,
	GhiChu nvarchar(100)
)



CREATE TABLE DonGia
(
	MaDG varchar(20)primary key,
	TenDG nvarchar(50),
	DonViTinh nvarchar(10),
	GhiChu nvarchar(100),
	TenQL nvarchar(50)
)

CREATE TABLE HoaDon
(
	MaHD varchar(20)primary key,
	TenHD nvarchar(50),
	GhiChu nvarchar(100),
	TenQL nvarchar(50)
)



CREATE TABLE PhongHat
(
	MaPH varchar(20)primary key,
	TenPH nvarchar(50),
	LoaiPH nvarchar(50),
	GiaTien int,
	GhiChu nvarchar(100),
	MaNV varchar(20)
)


CREATE TABLE Kho
(
	MaKho varchar(20)primary key,
	TenKho nvarchar(50),
	DiaChi nvarchar(100),
	GhiChu nvarchar(100)
)

CREATE TABLE PhieuNhap
(
	MaPhieuNhap varchar(20)primary key,
	TenPhieuPhap nvarchar(50),
	NgayNhap datetime,
	SanPhamNhap nvarchar(50),
	GhiChu nvarchar(100),
	MaNV varchar(20),
	MaMH varchar(20)
)

CREATE TABLE PhieuKiemKe
(
	MaPhieuKiemKe varchar(20)primary key,
	TenPhieuKiemKe nvarchar(50),
	NgayLap datetime,
	GhiChu nvarchar(100),
	MaNV varchar(20),
	MaMH varchar(20),
	MaKho varchar(20)
)

CREATE TABLE PhieuXuat
(
	MaPhieuXuat varchar(20)primary key,
	TenPhieuXuat nvarchar(50),
	NgayLap datetime,
	GhiChu nvarchar(100),
	MaNV varchar(20),
	MaMH varchar(20)
)

CREATE TABLE PhieuBaoHongMat
(
	MaPhieuBaoHongMat varchar(20)primary key,
	TenPhieuBaoHongMat nvarchar(50),
	NgayLap datetime,
	GhiChu nvarchar(100),
	MaNV varchar(20),
	MaMH varchar(20),
	MaKho varchar(20)
)

CREATE TABLE PhieuSuaChua
(
	MaPhieuSuaChua varchar(20)primary key,
	TenPhieuSuaChua nvarchar(50),
	NgayLap datetime,
	GhiChu nvarchar(100),
	MaNV varchar(20),
	MaMH varchar(20),
	MaKho varchar(20)
)