create database QLSV
go
use QLSV
go
create table Lop
(
	MaLop char(10) primary key,
	TenLop nvarchar(20),
	SiSo int check(SiSo>0)
)
create table SinhVien
(
	MaSV char(10) primary key,
	HoTen nvarchar(100),
	NgaySinh datetime,
	GioiTinh bit,
	MaLop char(10),
	QueQuan nvarchar(100)
)
create table MonHoc
(
	MaMon char(10) primary key,
	TenMon nvarchar(50),
	SoTC int check(SoTC>0),
	HocKy int check(HocKy>0)
)
create table BangDiem
(
	MaSV char(10),
	MaLop char(10),
	MaMon char(10),
	DiemGiuaKy float check(DiemGiuaKy>0),
	DiemCuoiKy float check(DiemCuoiKy>0),
	DiemTongKet float check(DiemTongKet>0)
)
alter table SinhVien add constraint FK_SinhVien_Lop foreign key (MaLop) references Lop(MaLop);
alter table BangDiem add constraint FK_BangDiem_SinhVien foreign key(MaSV) references SinhVien(MaSV);
alter table BangDiem add constraint FK_BangDiem_Lop foreign key(MaLop) references Lop(MaLop);
alter table BangDiem add constraint FK_BangDiem_MonHoc foreign key(MaMon) references MonHoc(MaMon);
