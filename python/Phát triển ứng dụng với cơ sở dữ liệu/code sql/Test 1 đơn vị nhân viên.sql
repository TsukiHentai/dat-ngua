create database test1
go
use test1
go
create table DONVI
(
	MaDV varchar(2) NOT NULL primary key,
	TenDV nvarchar(100) not null,
)
create table NHANVIEN
(
	MaNV varchar(50) NOT NULL primary key,
	TenNV nvarchar(5) NOT null,
	GioiTinh nvarchar(10),
	NgaySinh datetime,
	MaDV varchar(2)
)
alter table NHANVIEN add constraint FK_NHANVIEN_DONVI foreign key (MaDV) references DONVI(MaDV)