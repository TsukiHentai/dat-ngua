create database QLChamCong
go
use QLChamCong
go
create table SanPham
(
	MaSP nvarchar(50) not null primary key,
	TenSP nvarchar(100) not null,
	DonGia numeric(18,0) not null,
	MoTa nvarchar(150),
	TongSoSP int
)
create table ToCongNhan
(
	MaTo nvarchar(20) not null primary key,
	TenTo nvarchar(100) not null,
	SoCN int
)
create table CongNhan
(
	MaCN nvarchar(50) not null primary key,
	TenCN nvarchar(50) not null,
	NgaySinh datetime not null,
	NgayVao datetime,
	MaTo nvarchar(20) foreign key references ToCongNhan(MaTo),
	TongTienCong numeric(18,0)
)
create table ChamCong
(
	ID int not null primary key,
	Ngay datetime not null,
	MaCN nvarchar(50) foreign key references CongNhan(MaCN) not null,
	MaSP nvarchar(50) foreign key references SanPham(MaSP) not null,
	SoSP int not null
)