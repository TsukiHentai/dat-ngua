create database QLKS
go
use QLKS
go
create table KhachHang
(
	MaKH int identity(1,1) primary key,
	TenKH nvarchar(20),
	CMND char(20),
	QuocTich nvarchar(20),
	GioiTinh bit,
	MaPhong char(10)
)
create table DKThuePhong
(
	MaTP int identity(1,1) primary key,
	MaKH int,
	MaPhong char(10),
	NgayNhan datetime,
	DatTruoc float check(DatTruoc>0)
)
create table Phong
(
	MaPhong char(10) primary key,
	TenPhong nvarchar(20),
	LoaiPhong nvarchar(20),
	GiaPhong float check(GiaPhong>0),
	MoTa nvarchar(50)
)
create table HoaDon
(
	MaHD int identity(1,1) primary key,
	MaTP int,
	NgayTra datetime,
	SoTien float check(SoTien>0)
)
alter table KhachHang add constraint FK_KhachHang_Phong foreign key(MaPhong) references Phong(MaPhong);
alter table DKThuePhong add constraint FK_DKThuePhong_KhachHang foreign key(MaKH) references KhachHang(MaKH);
alter table DKThuePhong add constraint FK_DKThuePhong_Phong foreign key(MaPhong) references Phong(MaPhong);
alter table HoaDon add constraint FK_HoaDon_DKThuePhong foreign key(MaTP) references DKThuePhong(MaTP);
--Câu 2:
create view SoTien as select KhachHang.MaKH, KhachHang.TenKH, Phong.MaPhong, ((HoaDon.NgayTra-DKThuePhong.NgayNhan)*Phong.GiaPhong-DKThuePhong.DatTruoc) as 'So Tien' from KhachHang inner join Phong on KhachHang.MaPhong=Phong.MaPhong inner join DKThuePhong on Phong.MaPhong=DKThuePhong.MaPhong inner join HoaDon on HoaDon.MaTP=DKThuePhong.MaTP group by KhachHang.MaKH, KhachHang.TenKH, Phong.MaPhong