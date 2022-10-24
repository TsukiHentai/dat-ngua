create database kiemtra
go
use kiemtra
go
create table SV_DT
(
	ID int,
	MaSV nvarchar(20),
	MaDT int,
	KQ nvarchar(10),
	GhiChu nvarchar(50),
	constraint PK_SV_DT primary key (ID)
)
create table SinhVien
(
	MaSV nvarchar(20),
	TenSV nvarchar(50) NOT NULL,
	NS datetime NOT NULL,
	MaLop nvarchar(20) NOT NULL,
	NamVaoTruong int NOT NULL,
	constraint PK_SinhVien primary key (MaSV)
)
create table DeTai
(
	MaDT int,
	TenDT nvarchar(1000) NOT NULL,
	NgayBD datetime NOT NULL,
	NgayKT datetime NOT NULL,
	NoiTT nvarchar(150) not null,
	MaGV int NOT NULL,
	constraint PK_DeTai primary key(MaDT)
)
create table GiaoVien
(
	MaGV int,
	TenGV nvarchar(50) NOT NULL,
	DC nvarchar(150) NOT NULL,
	NgayVaoCQ datetime NOT NULL,
	SoDT int NOT NULL,
	constraint PK_GiaoVien primary key (MaGV)
)
ALTER TABLE DETAI ADD CONSTRAINT FK_DETAI_GIAOVIEN FOREIGN KEY(MaGV) REFERENCES GIAOVIEN(MaGV)
ALTER TABLE SV_DT ADD CONSTRAINT FK_SV_DT_DETAI FOREIGN KEY(MaDT) REFERENCES DETAI(MaDT)
ALTER TABLE SV_DT ADD CONSTRAINT FK_SV_DT_SINHVIEN FOREIGN KEY(MaSV) REFERENCES SINHVIEN(MaSV)
--Cau 2: Tao view
create view detaiinfo as 
select DeTai.MaDT, DeTai.TenDT,DeTai.NgayBD,DeTai.NgayKT,DeTai.NoiTT from DeTai inner join GiaoVien on DeTai.MaGV=GiaoVien.MaGV where GiaoVien.DC = N'Khoa CNTT' and YEAR(NgayBD)=2020
--Cau 3: Tao thu tuc
create procedure sp_ThongKeSoLuongDeTai
as
begin
select GiaoVien.MaGV ,GiaoVien.TenGV, GiaoVien.SoDT from GiaoVien inner join DeTai on GiaoVien.MaGV=DeTai.MaGV where YEAR(NgayBD)=2021
end
--Cau 4:Tao hàm
create function fSoSVNC
(@SinhVien_Malop nvarchar(20))
returns table 
return
select SV_DT.MaDT, COUNT(SV_DT.MaSV) as tong from 
SinhVien inner join SV_DT on SinhVien.MaSV=SV_DT.MaSV group by SV_DT.MaDT
--Cau 5: Tao trigger
if exists(select name from sysobjects where name='t_checkkiemtra')
drop trigger t_checkkiemtra
go
create trigger t_checkkiemtra
on GiaoVien
for insert,update, delete
as
begin
update GiaoVien
set SoDT=(select COUNT(*)from GiaoVien where GiaoVien.MaGV=DeTai.MaGV
where MaGV in(select MaGV from inserted)or MaGV)