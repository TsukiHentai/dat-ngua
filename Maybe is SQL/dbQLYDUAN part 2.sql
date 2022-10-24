create database danhsach1
go
use danhsach1
go
create table SinhVien
(
	MaSV char(10),
	HoTen nvarchar(50),
	GioiTinh nvarchar(10),
	NgaySinh date,
	MaLop char(10),
	HocBong int,
	Tinh int,
	constraint PK_SinhVien primary key (MaSV)
)
create table Lop
(
	MaLop char(10),
	TenLop nvarchar(50),
	MaKhoa char(10),
	constraint PK_Lop primary key (MaLop)
)
create table Khoa
(	
	MaKhoa char(10),
	TenKhoa nvarchar(50),
	SoGiangVien int,
	constraint PK_Khoa primary key(MaKhoa)
)
create table MonHoc
(
	MaMH char(10),
	TenMH nvarchar(50),
	SoTiet int,
	constraint PK_MonHoc primary key(MaMH)
)
create table KetQua
(
	MaSV char(10),
	MaMH char(10),
	DiemThi float,
	constraint PK_KetQua primary key(MaSV)
)
alter table SinhVien add constraint FK_SinhVien_KetQua foreign key (MaSV) references KetQua(MaSV);
alter table SinhVien add constraint FK_SinhVien_Lop foreign key (MaLop) references Lop(MaLop);
alter table Lop add constraint FK_Lop_Khoa foreign key (MaKhoa) references Khoa(MaKhoa);
alter table KetQua add constraint FK_KetQua_MonHoc foreign key (MaMH) references MonHoc(MaMH);
