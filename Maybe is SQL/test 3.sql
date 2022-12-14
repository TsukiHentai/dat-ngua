create database QLYTHUEPHONG
go
use QLYTHUEPHONG
go
create table KhachHang
(
	MaKH nvarchar(10),
	TenKH nvarchar(50),
	SoCM char(20),
	DiaChi nvarchar(50),
	NgaySinh date,
	GioiTinh nvarchar(10),
	constraint PK_KhachHang primary key(MaKH)
)
create table ThuePhong
(
	MaKH nvarchar(10),
	NgayDen date,
	NgayDi date,
	LoaiPhong char(10),
)
create table Phong
(
	LoaiPhong char(10),
	GiaTien int,
	constraint PK_Phong primary key (LoaiPhong)
)

alter table ThuePhong add constraint FK_ThuePhong_Phong foreign key(LoaiPhong) references Phong(LoaiPhong);
alter table ThuePhong add constraint FK_ThuePhong_KhachHang foreign key (MaKH) references KhachHang(MaKH);
insert into KhachHang values('001',N'Nguyễn Thị Tâm','031112345',N'27 Minh Khai, Hải Phòng','1990/09/11',N'Nữ');
insert into KhachHang values('002',N'Trần Thanh Vân','031789666',N'44 Trần Phú','1997/12/12',N'Nữ');
insert into KhachHang values('003',N'Phạm Bằng','032111890',N'67 Ngyễn Huê,Quảng Ninh','1980/02/24',N'Nam');
insert into KhachHang values('004',N'Bùi Văn Hùng','032000678',N'Quảng Ninh','',N'Nam');
insert into KhachHang values('005',N'Trần Nha Trang','034898777',N'Tuê Tĩnh, Quảng Ninh','1970/01/01',N'Nữ');
insert into Phong values('A',200);
insert into Phong values('B',500);
insert into Phong values('C',700);
insert into ThuePhong values('001','2015/12/11','2015/12/13','A');
insert into ThuePhong values('001','2016/04/01','2016/04/02','B');
insert into ThuePhong values('002','2015/12/11','2015/12/17','C');
insert into ThuePhong values('003','2016/01/12','2016/01/15','A');
insert into ThuePhong values('005','2015/12/25','2015/12/25','B');
insert into ThuePhong values('004','2014/12/12','2014/12/15','A');
insert into ThuePhong values('001','2016/06/11','2016/06/12','C');
--2.Tạo truy vấn ThongTinChung lấy thông tin về TenKH, NgaySinh, SoCM, NgayDi,NgayDen của tất cả khách hàng
select KhachHang.TenKH,KhachHang.NgaySinh,KhachHang.SoCM,ThuePhong.NgayDi,ThuePhong.NgayDen from KhachHang inner join ThuePhong on KhachHang.MaKH=ThuePhong.MaKH
--2.Hiển thị danh sách khách hàng như câu 2a nhưng sắp xếp theo ngày đi tăng dần, TenKH giảm dần
select KhachHang.TenKH,KhachHang.NgaySinh,KhachHang.SoCM,ThuePhong.NgayDi,ThuePhong.NgayDen from KhachHang inner join ThuePhong on KhachHang.MaKH=ThuePhong.MaKH order by NgayDi asc, TenKh desc
--3.Tạo truy vấn QUERY3 lấy thông tin về TenKH, NgaySinh, SoCM, NgayDi, NgayDen của khách hàng thuê phòng loại A
select KhachHang.TenKH,KhachHang.NgaySinh,KhachHang.SoCM,ThuePhong.NgayDi,ThuePhong.NgayDen from ThuePhong inner join KhachHang on ThuePhong.MaKH=KhachHang.MaKH where LoaiPhong='A'
--5.Tạo truy vấn QUERY5 lấy thông tin về TenKH, NgaySinh, SoCM, NgayDi, NgayDen của khách hàng thuê phòng A và có giới tính Nam
select KhachHang.TenKH,KhachHang.NgaySinh,KhachHang.SoCM,ThuePhong.NgayDi,ThuePhong.NgayDen from ThuePhong inner join KhachHang on ThuePhong.MaKH=KhachHang.MaKH where LoaiPhong='A' and GioiTinh=N'Nam'
--6.Tạo truy vấn QUERY5 lấy thông tin về TenKH, NgaySinh, SoCM, NgayDi, NgayDen của khách hàng thuê phòng A hoặc có giới tính Nam
select KhachHang.TenKH,KhachHang.NgaySinh,KhachHang.SoCM,ThuePhong.NgayDi,ThuePhong.NgayDen from ThuePhong inner join KhachHang on ThuePhong.MaKH=KhachHang.MaKH where LoaiPhong='A' or GioiTinh=N'Nam'
--7.Tạo truy vấn QUERY7 hiển thị thông tin về mã tenkh, ngày sinh, scm, ngaydi, ngayden của những khách hàng có ngày sinh nằm trong khoảng 01/09/1980 đến 31/12/1990.
select KhachHang.TenKH,KhachHang.NgaySinh,KhachHang.SoCM,ThuePhong.NgayDi,ThuePhong.NgayDen,
--10.Tạo truy vấn QUERY10a tính tổng tiền thuê phòng của từng khách hàng, từng loại phòng.
select KhachHang.MaKH,ThuePhong.LoaiPhong,SUM(Phong.GiaTien) as TongTien from Phong inner join ThuePhong on Phong.LoaiPhong=ThuePhong.LoaiPhong inner join KhachHang on KhachHang.MaKH=ThuePhong.MaKH group by KhachHang.MaKH,ThuePhong.LoaiPhong
--10.Tạo truy vấn QUERY10b tính tổng tiền thuê phòng của từng tháng, từng loại phòng.
select phong.LoaiPhong,month(ThuePhong.NgayDen),SUM(Phong.GiaTien) from Phong inner join ThuePhong on Phong.LoaiPhong=ThuePhong.LoaiPhong group by MONTH(NgayDen),Phong.LoaiPhong
--11.Tạo truy vấn QUERY11 tính tổng tiền thuê phòng của từng khách hàng, từng loại phòng trong năm 2010 (theo ngày đi). 
select KhachHang.MaKH,ThuePhong.MaKH,ThuePhong.LoaiPhong,SUM(GiaTien) as tongtien from Phong inner join ThuePhong on Phong.LoaiPhong=ThuePhong.LoaiPhong inner join KhachHang on KhachHang.MaKH=ThuePhong.MaKH where YEAR(NgayDi)=2010 group by KhachHang.MaKH,ThuePhong.MaKH,ThuePhong.LoaiPhong
--13.