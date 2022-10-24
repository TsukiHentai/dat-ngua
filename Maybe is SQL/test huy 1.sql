CREATE DATABASE DanhSach
GO
USE DanhSach
GO
CREATE TABLE SinhVien
(
	MaSV nvarchar(30) PRIMARY KEY,
	HoTen nvarchar(30),
	GioiTinh nvarchar(30),
	NgaySinh datetime,
	MaLop nvarchar(30),
	HocBong nvarchar(30),
	Tinh nvarchar(30),
)
GO
CREATE TABLE Lop
(
	MaLop nvarchar(30) PRIMARY KEY,
	TenLop nvarchar(30),
	MaKhoa nvarchar(30),
)
GO
CREATE TABLE Khoa
(
	MaKhoa nvarchar(30) PRIMARY KEY,
	TenKhoa nvarchar(30),
	SoGiangVien int,
)
GO
CREATE TABLE MonHoc
(
	MaMH nvarchar(30) PRIMARY KEY,
	TenMH nvarchar(30),
	SoTiet int,
)
GO
CREATE TABLE KetQua
(
	MaSV nvarchar(30) PRIMARY KEY,
	MaMH nvarchar(30),
	DiemThi int,
)
GO

INSERT INTO SinhVien(MaSV, HoTen, GioiTinh, NgaySinh, MaLop, HocBong, Tinh)
VALUES ('SV01', 'Nguyen Van A', 'Nam', '1-1-2001', 'Lop01', ' ', ' ')
INSERT INTO SinhVien(MaSV, HoTen, GioiTinh, NgaySinh, MaLop, HocBong, Tinh)
VALUES ('SV02', 'Nguyen Thi H', 'Nu', '2-2-2001', 'Lop01', ' ', ' ')
INSERT INTO SinhVien(MaSV, HoTen, GioiTinh, NgaySinh, MaLop, HocBong, Tinh)
VALUES ('SV03', 'Nguyen Van B', 'Nam', '3-3-2001', 'Lop02', ' ', ' ')
INSERT INTO SinhVien(MaSV, HoTen, GioiTinh, NgaySinh, MaLop, HocBong, Tinh)
VALUES ('SV04', 'Nguyen Thu H', 'Nam', '4-4-2001', 'Lop03', ' ', ' ')

INSERT INTO Lop(MaLop, TenLop, MaKhoa)
VALUES ('L01', 'TTM60', 'TTM')
INSERT INTO Lop(MaLop, TenLop, MaKhoa)
VALUES ('L02', 'TTM58', 'TTM')
INSERT INTO Lop(MaLop, TenLop, MaKhoa)
VALUES ('L03', 'KPM60', 'KPM')
INSERT INTO Lop(MaLop, TenLop, MaKhoa)
VALUES ('L04', 'CNT60', 'CNT')

INSERT INTO Khoa(MaKhoa, TenKhoa, SoGiangVien)
VALUES ('TTM', 'Truyen thong mang may tinh', 7)
INSERT INTO Khoa(MaKhoa, TenKhoa, SoGiangVien)
VALUES ('CNTT', 'Cong nghe thong tin', 5)
INSERT INTO Khoa(MaKhoa, TenKhoa, SoGiangVien)
VALUES ('KPM', 'Ky thuat phan mem', 6)

INSERT INTO MonHoc(MaMH, TenMH, SoTiet)
VALUES ('MH01', 'Lap Trinh C', 45)
INSERT INTO MonHoc(MaMH, TenMH, SoTiet)
VALUES ('MH02', 'Kien Truc May Tinh Va TBNV', 45)
INSERT INTO MonHoc(MaMH, TenMH, SoTiet)
VALUES ('MH03', 'Toan Cao Cap', 60)
INSERT INTO MonHoc(MaMH, TenMH, SoTiet)
VALUES ('MH04', 'Co So Du Lieu', 45)

INSERT INTO KetQua(MaSV, MaMH, DiemThi)
VALUES ('SV01', 'MH01', 9)
INSERT INTO KetQua(MaSV, MaMH, DiemThi)
VALUES ('SV01', 'MH04', 9)
INSERT INTO KetQua(MaSV, MaMH, DiemThi)
VALUES ('SV02', 'MH01', 10)
INSERT INTO KetQua(MaSV, MaMH, DiemThi)
VALUES ('SV02', 'MH02', 10)
INSERT INTO KetQua(MaSV, MaMH, DiemThi)
VALUES ('SV03', 'MH03', 10)
INSERT INTO KetQua(MaSV, MaMH, DiemThi)
VALUES ('SV03', 'MH01', 10)
INSERT INTO KetQua(MaSV, MaMH, DiemThi)
VALUES ('SV03', 'MH04', 7)