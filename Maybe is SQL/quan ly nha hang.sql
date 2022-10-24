
create table KhachHang
(
	MaKH char(10),
	TenKH nvarchar(50),
	DiaChi nvarchar(50),
	DienThoai int,
	constraint PK_Khachhang primary key (MaKH)
)
create table NhanVien
(
	MaNV char(10),
	TenNV nvarchar(50),
	ChucVu nvarchar(50),
	DiaChi nvarchar(50),
	DienThoai int,
	constraint PK_NhanVien primary key (MaNV)
)
create table NhaCungCap
(

	MaNCC char(10),
	TenNCC nvarchar(50),
	DiaChi nvarchar(50),
	DienThoai int,
	constraint PK_NhaCungCap primary key (MaNCC)
)
create table ThucPham
(
	MaTP char(10),
	TenTP nvarchar(50),
	constraint PK_ThucPham primary key (MaTP)
)
create table MonAn
(
	MaMon char(10),
	TenMon nvarchar(50),
	DonGia float,
	constraint PK_MonAn primary key (Mamon)
)
create table BanAn
(
	SoBan char(10),
	LoaiBan nvarchar(50),
	constraint PK_BanAn primary key (SoBan)
)
create table ThanhToan
(
	SoPhieuTT char(10),
	NgayTT date,
	SoTien float,
	MaKH char(10),
	MaNV char(10),
	SoPhieuYeuCau char(10),
	constraint PK_ThanhToan primary key (SoPhieuTT)
)

create table YeuCau
(
	Sophieuyeucau char(10),
	NgayYeuCau date,
	MaKH char(10),
	SoBan char(10),
	SoLuong float,
	MaMon char(10),
	constraint PK_YeuCau primary key (SoPhieuYeuCau)
)
create table Nhap
(
	SoPhieuNhap char (10),
	NgayNhap date,
	MaNV char(10),
	MaNCC char(10),
	SoLuong float,
	DonGia float,
	MaTP char(10),
	constraint PK_Nhap primary key(SoPhieuNhap)
)
alter table YeuCau add constraint FK_YeuCau_KhachHang foreign key (MaKH) references KhachHang(MaKH);
alter table YeuCau add constraint FK_YeuCau_BanAn foreign key (SoBan) references BanAn(SoBan);
alter table YeuCau add constraint FK_YeuCau_MonAn foreign key (MaMon) references MonAn(MaMon);
alter table ThanhToan add constraint FK_ThanhToan_NhanVien foreign key (MaNV) references NhanVien(MaNV);
alter table ThanhToan add constraint FK_ThanhToan_KhachHang foreign key (MaKH) references KhachHang(MaKH);
alter table Nhap add constraint FK_Nhap_NhanVien foreign key (MaNV) references NhanVien(MaNV);
alter table Nhap add constraint FK_Nhap_ThucPham foreign key (MaTP) references ThucPham(MaTP);
alter table Nhap add constraint FK_Nhap_NhaCungCap foreign key (MaNCC) references NhaCungCap(MaNCC);