create database QLXE
go 
use QLXE
go
create table TuyenDuong
(
	MaTuyen char(10) primary key,
	TenTuyen nvarchar(20),
	SoKm int check(SoKM >0),
	GiaTien float check(GiaTien>0)
)
create table Xe
(
	MaXe char(20) primary key,
	TenXe nvarchar(50),
	LaiXe nvarchar(50),
	PhuXe nvarchar(50),
	SoCho int check(SoCho > 0),
	TinhTrang bit
)
create table ChiTiet
(
	ID int identity(1,1) primary key,
	MaNT char(20),
	MaTuyen char(10),
	SoVeBan int check(SoVeBan > 0)
)
create table NhatTrinh
(
	MaNT char(20) primary key,
	Ngay datetime,
	MaXe char(20)
)
alter table ChiTiet add constraint FK_ChiTiet_NhatTrinh foreign key(MaNT) references NhatTrinh(MaNT);
alter table ChiTiet add constraint FK_ChiTiet_TuyenDuong foreign key(MaTuyen) references TuyenDuong(MaTuyen);
alter table NhatTrinh add constraint FK_NhatTrinh_Xe foreign key(MaXe) references Xe(MaXe);
-- Câu 2:
select NhatTrinh.MaNT, TuyenDuong.MaTuyen, ChiTiet.SoVeBan, SUM(GiaTien) as ThanhTien from NhatTrinh inner join ChiTiet on NhatTrinh.MaNT=ChiTiet.MaNT inner join TuyenDuong on ChiTiet.MaTuyen=TuyenDuong.MaTuyen group by NhatTrinh.MaNT, TuyenDuong.MaTuyen, ChiTiet.SoVeBan
-- Câu 3:
create view DanhSach as select Xe.MaXe, Xe.LaiXe, Xe.SoCho from Xe inner join NhatTrinh on Xe.MaXe=NhatTrinh.MaXe inner join ChiTiet on ChiTiet.MaNT=NhatTrinh.MaNT group by Xe.MaXe, Xe.LaiXe, Xe.SoCho having COUNT(ChiTiet.MaTuyen)=0
select * from DanhSach