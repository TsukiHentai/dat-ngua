create table SV_DT
(
	ID int NOT NULL primary key,
	MaSV nvarchar(20),
	MaDT int,
	KQ nvarchar(10),
	GhiChu nvarchar(50)
)
create table DeTai
(
	MaDT int NOT NULL primary key,
	TenDT nvarchar(1000),
	NgayBD datetime,
	NgayKT datetime,
	NoiTT nvarchar(150),
	MaGV int
)
create table SinhVien
(
	MaSV nvarchar(20) NOT NULL primary key,
	TenSV nvarchar(50),
	NS datetime,
	MaLop nvarchar(20),
	NamVaoTruong int
)
create table GiaoVien
(
	MaGV int not null primary key,
	TenGV nvarchar(50),
	DC nvarchar(150),
	NgayVaoCQ datetime,
	SoDT int
)
alter table SV_DT add constraint FK_SV_DT_SinhVien foreign key (MaSV) references SinhVien(MaSV);
alter table SV_DT add constraint FK_SV_DT_DeTai foreign key(MaDT) references DeTai(MaDT);
alter table DeTai add constraint FK_DeTai_GiaoVien foreign key (MaGV) references GiaoVien(MaGV);