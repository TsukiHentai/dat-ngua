--Họ và Tên: Nguyễn Minh An Đức
--Mã sinh viên: 82795
--Lớp: TTM60DH
--Nhóm: CSDL - N06
create database dbChoThueMayBom
go
use dbChoThueMayBom
go
create table MayBom
(
	SoHieu varchar(20),
	CongSuat int,
	DonGiaThue int,
	constraint PK_MayBom primary key (SoHieu)
)
go
create table KhachHang
(
	MaKH char(5),
	TenKH nvarchar(30),
	DienThoai varchar(10),
	DiaChi nvarchar(100),
	constraint PK_KhachHang primary key(MaKH)
)
go
create table HopDong
(
	MaHD char(5),
	MaKH char(5),
	SoHieu varchar(20),
	NgayBD date,
	NgayKT date,
	SoGio int,
	constraint PK_HopDong primary key(MAHD)
)
go
alter table HopDong add constraint FK_MayBom_HopDong foreign key (SoHieu) references MayBom(SoHieu);
alter table HopDong add constraint FK_HopDong_KhachHang foreign key (MaKH) references KhachHang(MaKH);
insert into MayBom values('KLSU:1256',300,250);
insert into MayBom values('STK:127908',150,120);
insert into MayBom values('UILE:120',250,180);
insert into MayBom values('YOKO:6901',280,200);
insert into KhachHang values('KH001',N'Trần Văn Hòa',0986123786,N'Tân Thới, Long Bình, Đồng Nai');
insert into KhachHang values('KH002',N'Vũ Văn Biên',0978111222,N'Hòa Hiệp, Hòa Tân, Tiền Giang');
insert into KhachHang values('KH003',N'Trần Văn Giàu',0969123456,N'Thái An, Vĩnh Hà, Vĩnh Long');
insert into HopDong values('HD001','KH001','KLSU:1256','2015-5-15','2015-6-16',5);
insert into HopDong values('HD002','KH001','KLSU:1256','2016-6-16','2016-6-19',6);
insert into HopDong values('HD003','KH001','STK:127908','2017-7-19','2017-8-25',6);
insert into HopDong values('HD004','KH001','STK:127908','2017-9-25','2017-10-25',3);
insert into HopDong values('HD005','KH002','KLSU:1256','2018-5-25','2018-8-17',5);
insert into HopDong values('HD006','KH002','UILE:120','2019-6-25','2019-7-15',9);
insert into HopDong values('HD007','KH002','UILE:120','2019-8-24','2019-9-27',6);
insert into HopDong values('HD008','KH003','YOKO:6901','2020-3-13','2020-5-15',5);
insert into HopDong values('HD009','KH003','UILE:120','2020-5-14','2020-7-20',6);
insert into HopDong values('HD010','KH003','STK:127908','2020-9-18','2020-10-20',7);
--Bài tâp:
--a.
select HopDong.MaHD,HopDong.SoHieu,HopDong.NgayBD,HopDong.NgayKT,HopDong.SoGio from HopDong inner join KhachHang on HopDong.MaKH=KhachHang.MaKH where KhachHang.TenKH=N'Trần Văn Hòa' and YEAR(NgayBD)=2017 and SoGio between 4 and 7
--b.
select MaHD,TenKH,HopDong.SoHieu,datediff(DAY,NgayBD,NgayKT)as SoNgayThue,DATEDIFF(DAY,NgayBD,NgayKT)*SoGio as SoGioHoatDong,MayBom.DonGiaThue,DonGiaThue*DATEDIFF(day,NgayBD,NgayKT)*SoGio as GiaTriHopDong from HopDong inner join KhachHang on HopDong.MaKH=HopDong.MaKH inner join MayBom on MayBom.SoHieu=HopDong.SoHieu group by HopDong.MaHD,KhachHang.TenKH,HopDong.SoHieu,HopDong.SoGio,HopDong.NgayBD,HopDong.NgayKT,MayBom.DonGiaThue order by GiaTriHopDong desc
--c.
select MayBom.SoHieu,MayBom.CongSuat,MayBom.DonGiaThue,DATEDIFF(day,HopDong.NgayBD,HopDong.NgayKT)as TongSoNgay,DATEDIFF(day,HopDong.NgayBD,HopDong.NgayKT)*SoGio as TongSoGio from MayBom inner join HopDong on MayBom.SoHieu=HopDong.SoHieu
--d.
select KhachHang.MaKH,KhachHang.TenKH,KhachHang.DienThoai,(DATEDIFF(DAY,HopDong.NgayBD,HopDong.NgayKT))*HopDong.SoGio*MayBom.DonGiaThue as TongTien from KhachHang inner join HopDong on KhachHang.MaKH=HopDong.MaKH inner join MayBom on HopDong.SoHieu=MayBom.SoHieu group by KhachHang.MaKH,KhachHang.TenKH,KhachHang.DienThoai,HopDong.NgayKT,HopDong.NgayBD,HopDong.SoGio,MayBom.DonGiaThue
--e.
select MayBom.SoHieu,MayBom.CongSuat,COUNT(HopDong.SoHieu)as SoLanThue,COUNT(distinct HopDong.MaKH)as SoLuongKhachThue from MayBom inner join HopDong on MayBom.SoHieu=HopDong.SoHieu group by MayBom.SoHieu,MayBom.CongSuat
--f.
select KhachHang.MaKH,KhachHang.TenKH,COUNT(HopDong.MaHD) as SoLanThue,COUNT(distinct SoHieu) as SoMayDaThue from KhachHang inner join HopDong on KhachHang.MaKH=HopDong.MaKH group by KhachHang.MaKH,KhachHang.TenKH
