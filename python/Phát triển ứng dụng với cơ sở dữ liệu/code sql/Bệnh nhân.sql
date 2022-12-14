create database BenhNhan
go
use BenhNhan
go
create table BenhNhan
(
	MaBN char(10) primary key,
	TenBN nvarchar(50),
	NgaySinh datetime,
	GioiTinh nchar(10),
	DiaChi nvarchar(100),
	NgayNhapVien datetime
)
create table ChiTietKham
(
	ID int identity(1,1) primary key,
	MaBN char(10),
	MaBS char(10),
	NgayKham datetime,
	KetLuan nvarchar(100),
	VienPhi float check(VienPhi>0)
)
create table Khoa
(
	MaKhoa char(10) primary key,
	TenKhoa nvarchar(50),
	ChucNang nvarchar(50)
)
create table BacSi
(
	MaBS char(10) primary key,
	TenBS nvarchar(20),
	MaKhoa char(10)
)
alter table ChiTietKham add constraint FK_ChiTietKham_Khoa foreign key (MaBN) references BenhNhan(MaBN);
alter table ChiTietKham add constraint FK_ChiTietKham_BacSi foreign key(MaBS) references BacSi(MaBS);
alter table BacSi add constraint FK_BacSi_Khoa foreign key(MaKhoa) references Khoa(MaKhoa);
-- Câu 2: Viết câu lệnh truy vấn đưa ra tổng tiền viện phí theo từng khoa.
select Khoa.*, SUM(ChiTietKham.VienPhi) as N'Tổng tiền' from Khoa inner join BacSi on Khoa.MaKhoa=BacSi.MaKhoa inner join ChiTietKham on BacSi.MaBS=ChiTietKham.MaBS group by Khoa.MaKhoa,Khoa.TenKhoa, Khoa.ChucNang
-- Câu 3: Tạo một view thông tin về MaBS, TenBS, TenKhoa của bác sĩ khám cho nhiều bênh nhân nhất.
create view ThongTin as select BacSi.MaBS, BacSi.TenBS, BacSi.MaKhoa from BacSi inner join ChiTietKham on BacSi.MaBS=ChiTietKham.MaBS having SUM(ChiTietKham.MaBN)>=All(select SUM(ChiTietKham.MaBN) from ChiTietKham)
-- Not done !!!