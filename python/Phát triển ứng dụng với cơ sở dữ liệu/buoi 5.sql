CREATE DATABASE DongPhim

USE DongPhim

GO




CREATE TABLE DaoDien
(
	MaDD nvarchar(30) NOT NULL,
	TenDD nvarchar(50) NOT NULL,
	Email nvarchar(50) NULL,
	Tel nvarchar(20) NULL,
	GhiChu nvarchar(150) NULL
	CONSTRAINT PK_DaoDien PRIMARY KEY(MaDD)
)

CREATE TABLE Phim
(
	MaPhim nvarchar(50) NOT NULL,
	TenPhim nvarchar(150) NOT NULL,
	KinhPhi numeric(18,0) NULL,
	NoiDung nvarchar(150) NULL,
	NgayBamMay datetime NULL,
	NgayKetThuc datetime NULL,
	MaDD nvarchar(30) NULL
	CONSTRAINT PK_Phim PRIMARY KEY(MaPhim)
)

CREATE TABLE DienVien
(
	MaDV nvarchar(30) NOT NULL,
	TenDV nvarchar(50) NOT NULL,
	Email nvarchar(50) NULL,
	Tel nvarchar(20) NULL,
	TongThuLao numeric(18,0) NULL,
	GhiChu nvarchar(150) NULL
	CONSTRAINT PK_DienVien PRIMARY KEY(MaDV)
)


CREATE TABLE DienPhim
(
	ID int NOT NULL,
	NgayDien datetime NULL,
	NgayKetThuc datetime NULL,
	MaDV nvarchar(30) NULL,
	MaPhim nvarchar(50) NULL,
	ThuLao numeric(18,0) NULL,
	GhiChu nvarchar(150) NULL
	CONSTRAINT PK_DienPhim PRIMARY KEY(ID)
)

ALTER TABLE Phim ADD CONSTRAINT FK_Phim_DaoDien FOREIGN KEY(MaDD) REFERENCES DaoDien(MaDD)
ALTER TABLE DienPhim ADD CONSTRAINT FK_DienPhim_DienVien FOREIGN KEY(MaDV) REFERENCES DienVien(MaDV)
ALTER TABLE DienPhim ADD CONSTRAINT FK_DienPhim_Phim FOREIGN KEY(MaPhim) REFERENCES Phim(MaPhim)
-- Cau 2:
create view Phiminfo as
select MaPhim, TenPhim, KinhPhi, NoiDung from Phim inner join DaoDien on Phim.MaDD=DaoDien.MaDD where TenDD=N'Hà Tuấn Anh'
--Cau 3:
create procedure sp_Thongkethulao as
select MaDV, TenDV, TongThuLao from DienVien inner join DienPhim on DienVien.MaDV=DienPhim.MaDV where YEAR(NgayKetThuc)=2020
--Cau 4:
create function fTongThuLaoPhim(@MaPhim nvarchar(50))
returns int as begin
declare @TongThuLao int
select @TongThuLao=COUNT(MaPhim) from DienPhim inner join DienVien on DienPhim.MaDV=DienVien.MaDV where MaPhim=@MaPhim
RETURN @TongThuLao
end
--Cau 5:
create trigger blabla on DienVien for delete as
update DienVien set TongThuLao=1000000 from deleted where DienVien.TongThuLao=deleted.TongThuLao
create trigger chendienvien on DienVien for insert as
update DienVien set TongThuLao=5000000 from inserted where DienVien.TongThuLao=inserted.TongThuLao
