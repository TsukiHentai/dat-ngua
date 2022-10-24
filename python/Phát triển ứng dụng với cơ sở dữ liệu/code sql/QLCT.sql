create database QLCT
go
use QLCT
go
create table PhongBan
(
	MaPB char(20) primary key,
	TenPB nvarchar(100),
	ChucNang nvarchar(100)
)
create table CongTrinh
(
	MaCT char(10) primary key,
	TenCT nvarchar(100),
	DiaDiem nvarchar(100)
)
create table NhanVien
(
	MaNV char(20) primary key,
	TenNV nvarchar(100),
	NgaySinh datetime,
	Phai nchar(10),
	QueQuan nvarchar(100),
	SDT char(20),
	MaPB char(20)
)
create table PhanCong
(
	ID int identity(1,1) primary key,
	MaCT char(10),
	MaNV char(20),
	NgayPhanCong datetime,
	NgayHoanThanh datetime
)
alter table NhanVien add constraint FK_NhanVien_PhongBan foreign key(MaPB) references PhongBan(MaPB);
alter table PhanCong add constraint FK_PhanCong_CongTrinh foreign key(MaCT) references CongTrinh(MaCT);
alter table PhanCong add constraint FK_PhanCong_NhanVien foreign key(MaNV) references NhanVien(MaNV);
--Câu 2:
create procedure sp_Thongke as begin select PhongBan.MaPB, PhongBan.TenPB, COUNT(NhanVien.MAPB) as 'So nhan vien' from PhongBan inner join NhanVien on PhongBan.MaPB=NhanVien.MAPB group by PhongBan.MaPB, PhongBan.TenPB end
--Câu 3:
