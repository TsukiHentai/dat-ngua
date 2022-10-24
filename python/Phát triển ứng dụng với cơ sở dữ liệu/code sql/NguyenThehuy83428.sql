create database NguyenTheHuy83428
go 
use NguyenTheHuy83428
go
create table NhanVien
(
	MaNV nvarchar(20) primary key,
	TenNV nvarchar(50),
	ChucVu nvarchar(20)
)
create table DuAn
(
	MaDA nvarchar(20) primary key,
	TenDA nvarchar(50),
	NgayBD datetime,
	NgayKT datetime,
	KinhPhi nvarchar(20),
	MaNV nvarchar(20) foreign key references NhanVien(MaNV)
)
create table VatTu
(
	MaVT nvarchar(20) primary key,
	TenVT nvarchar(50),
	DVT nvarchar(20),
	DonGia int,
	SoLuongDaCap int
)
create table CapPhat
(
	ID int IDENTITY(1,1) primary key,
	NgayCap datetime,
	MaDA nvarchar(20) foreign key references DuAn(MaDA),
	MaVT nvarchar(20) foreign key references VatTu(MaVT),
	SoLuong int
)
--cau 2
if exists (select name from sysobjects where name = 't_TongSLVatTu' and type = 'TR')
drop trigger t_TongSLVatTu
go
create trigger t_TongSLVatTu on VatTu for insert, update, delete
as
declare @MaVT int
set @MaVT = ''
select @MaVT = MaVT from inserted
if @MaVT = ''
select @MaVT = MaVT from deleted
update VatTu set SoLuongDaCap=coalesce((Select count(MaVT)

from VatTu where MaVT=@MaVT),0)


--cau 3
create function DanhSachVatTu (@MaDA int)
returns table 
as
return (
select CapPhat.MaVT, CapPhat.SoLuong, CapPhat.NgayCap, TenVT, SoLuongDaCap 
from VatTu inner join CapPhat on VatTu.MaVT = CapPhat.MaVT
where MaDA=@MaDA
)