create database dbQLYNHANVIEN
go
use dbQLYNHANVIEN
go
create table PhongBan
(
	MaPB char(3) not null,
	TenPB nvarchar(50) not null,
	DiaDiem nvarchar(100),
	constraint PK_PhongBan primary key (MaPB)
)
go
create table NhanVien
(
	MaNV char(5) not null,
	TenNV nvarchar(50) not null,
	ChuyenMon nvarchar(50),
	MaPB char(3),
	constraint PK_NhanVien primary key (MaNV)
)
go
insert into PhongBan values('PTV',N'Phòng Tài Vụ','P301')
insert into PhongBan values('PTK',N'Phòng Thiết Kế','P302')
insert into PhongBan values('PKT',N'Phòng Kỹ Thuật','P303')
insert into PhongBan values('PKD',N'Phòng Kinh Doanh','P304')
insert into PhongBan values('PNS',N'Phòng Nhân Sự','P305')
insert into PhongBan values('PKH',N'Phòng Kế Hoạch','P306')
go
insert into NhanVien values('NV001',N'Nguyễn Thái Cường',N'KS Tin Học','PTV')
insert into NhanVien values('NV002',N'Nguyễn Vũ Thìn',N'CN Kinh Tế','PTV')
insert into NhanVien values('NV003',N'Nguyễn Văn Châu',N'CN Kỹ Thuật CN','PKT')
insert into NhanVien values('NV004',N'Nguyễn Trần Tiến',N'CN Marketing','PTK')
insert into NhanVien values('NV005',N'Nguyễn Thái Hòa',N'KS Tin Học','TT1')
insert into NhanVien values('NV006',N'Nguyễn Chu Bài',N'KS Tin Học','TT2')
insert into NhanVien values('NV007',N'Nguyễn Thế Huân',N'KS Tin Học','TT3')
go
-- Với mệnh đề inner join
select * from PhongBan inner join NhanVien on PhongBan.MaPB=NhanVien.MaPB;
select * from NhanVien inner join PhongBan on NhanVien.MaPB=PhongBan.MaPB
--Với mệnh đề left outer join
select * from PhongBan left outer join NhanVien on PhongBan.MaPB=NhanVien.MaPB
select * from NhanVien left outer join PhongBan on NhanVien.MaPB=PhongBan.MaPB
--Với mệnh đề right outer join
select * from NhanVien right outer join PhongBan on NhanVien.MaPB=PhongBan.MaPB
select * from PhongBan right outer join NhanVien on PhongBan.MaPB=NhanVien.MaPB
--Với mệnh đề full outer join
select * from NhanVien full outer join PhongBan on NhanVien.MaPB=PhongBan.MaPB
select * from PhongBan full outer join NhanVien on NhanVien.MaPB=PhongBan.MaPB
--Với mệnh đề cross join
select * from NhanVien cross join PhongBan