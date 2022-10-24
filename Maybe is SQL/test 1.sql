create database dbQLYDUAN
go
use dbQLYDUAN
go
create table PhongBan
(
	MaPB char(3) not null,
	TenPB nvarchar(50),
	DiaDiem nvarchar(100),
	constraint PK_PhongBan primary key (MaPB)
)
go
create table NhanVien
(
	MaNV char(5) not null,
	TenNV nvarchar(50),
	NgaySinh date,
	ChuyenMon nvarchar
)