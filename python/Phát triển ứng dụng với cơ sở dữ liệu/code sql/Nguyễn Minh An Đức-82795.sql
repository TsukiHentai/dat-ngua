Câu 1:
create database DongPhim
go 
use DongPhim
go
create table Phim
(
	MaPhim nvarchar(50) not null primary key,
	TenPhim nvarchar(150) not null,
	KinhPhi numeric(18,0),
	NoiDung nvarchar(150),
	NgayBamMay datetime,
	NgayKetThuc datetime,
	MaDD nvarchar(30),
)
create table DaoDien
(
	MaDD nvarchar(30) not null primary key,
	TenDD nvarchar(50) not null,
	Email nvarchar(50),
	Tel nvarchar(20),
	GhiChu nvarchar(150)
)
create table DienVien
(
	MaDV nvarchar(30) not null primary key,
	TenDV nvarchar(50) not null,
	Email nvarchar(50),
	Tel nvarchar(20),
	TongThuLao numeric(18,0),
	GhiChu nvarchar(150)
)
create table DienPhim
(
	ID int not null primary key,
	NgayDien datetime,
	NgayKetThuc datetime,
	MaDV nvarchar(30),
	MaPhim nvarchar(50),
	ThuLao numeric(18,0),
	GhiChu nvarchar(150),
)
alter table DienPhim add constraint FK_DienPhim_DienVien foreign key(MaDV) references DienVien(MaDV);
alter table DienPhim add constraint FK_DienPhim_Phim foreign key(MaPhim) references Phim(MaPhim);
alter table Phim add constraint FK_Phim_DaoDien foreign key(MaDD) references DaoDien(MaDD)
-- Câu 2:
create procedure sp_Thongkedienvien as
select Phim.MaPhim, Phim.TenPhim, count(DienVien.MaDV) as SoDienVien from Phim inner join DienPhim on Phim.MaPhim=DienPhim.MaPhim inner join DienVien on DienPhim.MaDV=DienVien.MaDV group by Phim.MaPhim, Phim.TenPhim
-- Câu 3:
if exists (select name from sysobjects
where name = 't_Checkinsert_tongthulao' and type = 'TR')
drop trigger t_Checkinsert_tongthulao
go
create trigger t_Checkinsert_tongthulao
on DienPhim
for update,insert,delete
as
Declare @st numeric(18,0)
select @st= sum(DV.TongThuLao) 
from DienVien DV,DienPhim d,Phim p
where DV.MaDV=d.MaDV and p.MaPhim=d.MaPhim 

if @st >=0
Begin
print @st
End
go