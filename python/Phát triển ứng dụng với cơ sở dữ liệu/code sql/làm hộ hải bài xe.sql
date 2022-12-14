create database ble
go
use ble
go
create table LoaiXe
(
   MaLx int primary key ,
   TenLx nvarchar(200)
)
create table Xe 
(
   MaXe varchar(20) primary key ,
   TenXe nvarchar(200),
   MaLx int foreign key references LoaiXe(MaLx) ,
   NgaySx datetime,
   NgayDung datetime
)
create table PhienBan
(
   MaPb varchar(20) primary key ,
   MaXe varchar(20) foreign key references Xe(MaXe),
   NamSx int Check (NamSx>2000),
   SoHieu nvarchar(100),
   GiaBan float 
)
create table DaBan
(
   Ma varchar(20) primary key  ,
   NgayBan datetime,
   MaPb varchar(20) foreign key references PhienBan(MaPb),
   Gia float check (Gia>0),
   TenKhach nvarchar(100)
)
-- Viết câu lệnh SQL đưa ra tổng tiền đã bán theo loại xe.
select LoaiXe.MaLx, LoaiXe.TenLx, SUM(PhienBan.GiaBan)as N'Tổng tiền' from LoaiXe inner join Xe on LoaiXe.MaLx=Xe.MaLx inner join PhienBan on Xe.MaXe=PhienBan.MaXe group by LoaiXe.MaLx, LoaiXe.TenLx