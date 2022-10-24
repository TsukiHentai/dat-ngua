
create table tblPhongBan
(
	MaPB char(3)NOT NULL,
	TenPB nvarchar(50) NOT NULL,
	DiaDiem nvarchar(100) NOT NULL,
)
go
create table tblNhanVien
(
	MaNV char(5) NOT NULL,
	TenNV nvarchar(50) NOT NULL,
	NgaySinh date NOT NULL,
	ChuyenMon nvarchar(100),
	MaPB char(3) NOT NULL,
)
go
create table tblDuAn
(
	MaDA char(4) NOT NULL,
	TenDA nvarchar(50) NOT NULL,
	DiaDiem nvarchar(100) NOT NULL,
)
go
create table tblPhanCong
(
	MaNV char(5) NOT NULL,
	MaDA char(4) NOT NULL,
)

	