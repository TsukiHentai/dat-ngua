create database QuanLyDeTai
go
use QuanLyDeTai
go
create table SinhVien
(
	MaSV nvarchar(10) primary key,
	TenSV nvarchar(50),
	NS datetime,
	MaLop nvarchar(10),
	NamVaoTruong int
)
create table GiaoVien
(
	MaGV nvarchar(10) primary key,
	TenGV nvarchar(50),
	DC nvarchar(100),
	NgayVaoCQ datetime,
	SoDT int,
)
create table DeTai
(
	MaDT nvarchar(10) primary key,
	TenDT nvarchar(100),
	NgayBD datetime,
	NgayKT datetime,
	NoiTT nvarchar(100),
	MaGV nvarchar(10)
)
create table SV_DT
(
	ID nvarchar(10) primary key,
	MaSV nvarchar(10),
	MaDT nvarchar(10),
	GhiChu nvarchar(100)
)
alter table SV_DT add constraint FK_SV_DT_SinhVien foreign key (MaSV) references SinhVien(MaSV);
alter table SV_DT add constraint FK_SV_DT_DeTai foreign key (MaDT) references DeTai(MaDT);
alter table DeTai add constraint FK_DeTai_GiaoVien foreign key(MaGV) references GiaoVien(MaGV);
