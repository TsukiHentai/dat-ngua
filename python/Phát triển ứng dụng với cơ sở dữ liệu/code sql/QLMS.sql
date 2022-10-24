create database QLMS

go
use QLMS
go
create table SinhVien
(
	MaSV char(10) primary key,
	HoTen nvarchar(100),
	NgaySinh datetime,
	GioiTinh bit
)
create table NXB
(
	MaNXB char(10) primary key,
	TenNSB nvarchar(100)
)
create table PhieuMuon
(
	MaSach char(10),
	MaSV char(10),
	NgayMuon datetime,
	NgayTra datetime
)
create table Sach
(
	MaSach char(10) primary key,
	TenSach nvarchar(100),
	TheLoai nvarchar(20),
	NamXB int,
	MaNXB char(10),
	TrangThai char(3)
)
alter table PhieuMuon add constraint FK_PhieuMuon_Sach foreign key(MaSach) references Sach(MaSach);
alter table PhieuMuon add constraint FK_PhieuMuon_SinhVien foreign key(MaSV) references SinhVien(MaSV);
alter table Sach add constraint FK_Sach_NXB foreign key(MaNXB) references NXB(MaNXB)