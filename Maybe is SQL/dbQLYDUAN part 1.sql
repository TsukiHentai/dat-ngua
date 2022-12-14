create database dbQLYDUAN01
go
use dbQLYDUAN01
go
create table PhongBan
(
	MaPB char(3),
	TenPB nvarchar(50),
	DiaDiem nvarchar(100),
	constraint PK_PhongBan primary key (MaPB)
)
create table NhanVien
(
	MaNV char(5),
	TenNV nvarchar(50),
	NgaySinh date,
	ChuyenMon nvarchar(50),
	MaPB char(3),
	constraint PK_NhanVien primary key (MaNV)
)
create table DuAn
(
	MaDA char(4),
	TenDA nvarchar(50),
	DiaDiem nvarchar(50),
	constraint PK_DuAn primary key(MaDA)
)
create table PhanCong
(
	MaNV char(5),
	MaDA char(4),
	constraint PK_PhanCong primary key(MaNV)
)
alter table NhanVien add constraint FK_NhanVien_PhongBan foreign key (MaPB) references PhongBan(MaPB);
alter table PhanCong add constraint FK_PhanCong_NhanVien foreign key (MaNV) references NhanVien(MaNV);
alter table PhanCong add constraint FK_PhanCong_DuAn foreign key (MaDA) references DuAn(MaDA);
-- Câu 1. Chèn dữ liệu
insert into PhongBan values('PKT',N'Phòng Kỹ Thuật',N'Phòng 303 - Tầng 3, nhà B6');
insert into PhongBan values('PKD',N'Phòng Kinh Doanh',N'Phòng 205 - Tầng 2, nhà B6');
insert into PhongBan values('PNS',N'Phòng Nhân Sự',N'Phòng 202 - Tầng 2, nhà A5');
insert into PhongBan values('PTK',N'Phòng Thiết Kế',N'Phòng 101 - Tầng 1, nhà A5');
insert into NhanVien values('NV001',N'Trần Văn An','1991-03-20',N'Kỹ Sư Điện','PKT');
insert into NhanVien values('NV002',N'Vũ Văn Hùng','1989-09-03',N'Kỹ Sư Cơ khí','PKT');
insert into NhanVien values('NV003',N'Trần Văn Cường','1997-05-03',N'Cử nhân Kinh tế','PKD');
insert into NhanVien values('NV004',N'Vũ Văn Minh','1998-05-27',N'Kỹ Sư Tin học','PKT');
insert into NhanVien values('NV005',N'Vũ Duy Tuấn','1995-06-08',N'Kiến trúc sư','PKT');
insert into NhanVien values('NV006',N'Trần Anh Cường','1996-05-20',N'Cử nhân Kế toán','PKD');
insert into DuAn values('DA01',N'Thiết kế nội thất',N'Khách sạn Hoàng Gia');
insert into DuAn values('DA02',N'Lắp đặt hệ thống điện',N'Tòa nhà An Khánh');
insert into DuAn values('DA03',N'Sửa chữa thang máy',N'Cao ốc Minh Phú');
insert into PhanCong values('NV001','DA02');
insert into PhanCong values('NV002','DA03');
insert into PhanCong values('NV003','DA02');
insert into PhanCong values('NV004','DA03');
insert into PhanCong values('NV005','DA01');
insert into PhanCong values('NV006','DA01');
-- Câu 2.
update NhanVien set NgaySinh='1998-05-03', ChuyenMon=N'Kỹ sư Công nghệ thông tin' where MaNV='NV004'
-- Câu 3.
update DuAn set TenDA=N'Lắp đặt hệ thống chiếu sáng',DiaDiem=N'Khu đô thị VINHOMES' where MaDA='DA02'