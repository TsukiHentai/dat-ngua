create database QLDA82795
go
use QLDA82795
go
create table NhanVien
(
	MaNV nvarchar(10) primary key,
	TenNV nvarchar(50),
	ChucVu nvarchar(50),
	TongTienCong int
)
create table DuAn
(
	MaDA nvarchar(10) primary key,
	TenDA nvarchar(50),
	NgayBD datetime,
	NgayKT datetime,
	KinhPhi numeric(18,0),
	MaNV nvarchar(10),
)
create table VatTu
(
	MaVT nvarchar(10) primary key,
	TenVT nvarchar(50),
	DVT nvarchar(50),
	DonGia numeric(18,0),
	SoLuongDaNhap int,
)
create table CapPhat
(
	ID int identity(1,1) primary key,
	NgayCap datetime,
	MaDA nvarchar(10),
	MaVT nvarchar(10),
	SoLuong int
)
create table ThamGia
(
	ID int identity(1,1) primary key,
	MaNV nvarchar(10),
	MaDA nvarchar(10),
	TienCong numeric(18,0),
	GhiChu nvarchar(100)
)
alter table DuAn add constraint FK_DuAn_NhanVien foreign key (MaNV) references NhanVien(MaNV);
alter table CapPhat add constraint FK_CapPhat_DuAn foreign key(MaDA) references DuAn(MaDA);
alter table CapPhat add constraint FK_CapPhat_VatTu foreign key(MaVT) references VatTu(MaVT);
alter table ThamGia add constraint FK_ThamGia_NhanVien foreign key(MaNV) references NhanVien(MaNV);
alter table ThamGia add constraint FK_ThamGia_DuAn foreign key(MaDA) references DuAn(MaDA);
--Câu 2:
if exists (select name from sysobjects
where name = 't_Checkinsert_tongtiencong' and type = 'TR')
drop trigger t_Checkinsert_tongtiencong
go
create trigger t_Checkinsert_tongtiencong
on ThamGia
for update,insert,delete
as
Declare @st numeric(18,0)
select @st= sum(NV.TongTienCong) 
from NhanVien NV,ThamGia TG
where NV.MaNV = TG.MaNV  

if @st >=0
Begin
print @st
End
go
--Câu 3:
Create function fDSNVtheoDuAn(@MaDA nvarchar(30))
returns table
return(
Select NhanVien.TenNV
from NhanVien inner join ThamGia on(NhanVien.MaNV=ThamGia.MaNV) inner join DuAn on(DuAn.MaDA=ThamGia.MaDA)
where DuAn.MaDA=@MaDA
)