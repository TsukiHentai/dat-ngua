create database DuAn
go
use DuAn
go
create table NhanVien
(
	MaNV nvarchar(5) not null,
	TenNV nvarchar(50) not null,
	DiaChi nvarchar(100),
	MaDV nvarchar(2),
	MaNVGS nvarchar(5)
	constraint PK_NhanVien primary key (MaNV)
)
go
create table ChiPhi
(
	MaCP int not null,
	MaNV nvarchar(5),
	MaDA nvarchar(5),
	NoiDungChi nvarchar(200),
	SoLuong real,
	DonGia real,
	ThanhTien real,
	constraint PK_ChiPhi primary key (MaCP)
)
go
create table DUAN
(
	MaDA nvarchar(5),
	TenDA nvarchar(50),
	DiaChi nvarchar(150),
	MaKH nvarchar(50),
	MaDV nvarchar(2),
	NgayBO date,
	NgayKT date,
	TongThu real,
	TongChi real,
	GhiChu nvarchar(200),
	constraint PK_DuAn primary key (MaDA)
)
go
create table KhachHang
(
	MaKH nvarchar(50),
	TenKH nvarchar(150),
	DiaChi nvarchar(150),
	Tel nvarchar(20),
	constraint PK_KhachHang primary key (MaKH)
)
go
create table ThamGia
(
	MaTG int not null,
	MaNV nvarchar(5),
	MaDA nvarchar(5),
	SoGio real,
	DonGia real,
	ThanhTien numeric(18,0),
	constraint PK_ThamGia primary key (MaTG)
)
go
create table ThanNhan
(
	MaTN int not null,
	TenTN nvarchar(50) not null,
	DiaChi nvarchar(150),
	NgheNghiep nvarchar(50),
	NamSinh numeric(18,0),
	MaNV nvarchar(5),
	constraint PK_ThanNhan primary key (MaTN)
)
go
create table CapPhat
(
	MaCP int not null,
	NgayCP datetime not null,
	MaVT nvarchar(20),
	MadA nvarchar(5),
	SoLuong real,
	DonGia real,
	ThanhTien real,
	constraint PK_CapPhat primary key (MaCP)
)
go
create table DonVi
(
	MaDV nvarchar(2) not null,
	TenDV nvarchar(100) not null,
	ViTri nvarchar(150),
	SoNV int,
	MaNV nvarchar(5),
	constraint PK_DonVi primary key (MaDV)
)
go
create table VatTu
(
	MaVT nvarchar(20) not null,
	TenVT nvarchar(60) not null,
	DVT nvarchar(20),
	DonGia real,
	constraint PK_VatTu primary key (MaVT)
)
alter table ChiPhi add constraint FK_ChiPhi_NhanVien foreign key (MaNV) references NhanVien(MaNV);
alter table ChiPhi add constraint FK_ChiPhi_DuAn foreign key (MaDA) references DUAN(MaDA);
alter table DUAN add constraint FK_DUAN_KhachHang foreign key (MaKH) references KhachHang(MaKH);
alter table DUAN add constraint FK_DUAN_DonVi foreign key (MaDV) references DonVi(MaDV);
alter table ThamGia add constraint FK_ThamGia_NhanVien foreign key (MaNV) references NhanVien(MaNV);
alter table ThamGia add constraint FK_ThamGia_DUAN foreign key (MaDA) references DUAN(MaDA);
alter table ThanNhan add constraint FK_ThanNhan_NhanVien foreign key (MaNV) references NhanVien(MaNV);
alter table CapPhat add constraint FK_CapNhat_DUAN foreign key (MaDA) references DUAN(MaDA);
alter table CapPhat add constraint FK_CapPhat_VatTu foreign key (MaVT) references VatTu(MaVT);
alter table DonVi add constraint FK_DonVi_NhanVien foreign key (MaNV) references NhanVien(MaNV)