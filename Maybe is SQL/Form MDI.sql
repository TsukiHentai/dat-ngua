create database QLSinhVien
go 
use QLSinhVien
go 
create table SinhVien
(
	MaSo int primary key,
	HoTen Nvarchar(50),
	NgaySinh datetime,
	GioiTinh nchar(5),
	DiaChi nvarchar(50),
	DienThoai int,
	MaKhoa nchar(5)
)
create table Khoa
(
	MaKhoa nchar(5) primary key,
	TenKhoa nchar(50)
)
create table Mon
(
	MaMH nchar(5) primary key,
	TenMH nchar(50),
	SoTiet int
)
create table KetQua
(
	MaSo int primary key,
	MaMH nchar(5),
	Diem int
)
alter table SinhVien add constraint FK_SinhVien_Khoa foreign key(MaKHoa) references Khoa(MaKhoa)
alter table KetQua add constraint FK_KetQua_SinhVien foreign key (MaSo) references SinhVien(MaSo)
alter table KetQua add constraint FK_KetQua_Mon foreign key(MaMH) references Mon(MaMH)