create database ChamCongSanPham
use ChamCongSanPham
create table SanPham
(
	MaSP nvarchar(50) primary key,
	TenSP nvarchar(100),
	Dongia numeric(18,0),
	Mota nvarchar(150),
	TongsoSP int
)
create table ToCongNhan
(
	MaTo nvarchar(20) primary key,
	TenTo nvarchar(100),
	SoCN int
)
create table Congnhan
(
	MaCN nvarchar(50) primary key,
	TenCN nvarchar(50),
	NgaySinh datetime,
	NgayVao datetime,
	MaTo nvarchar(20) foreign key references ToCongNhan(MaTo),
	TongTienCong numeric(18,0)
)
create table ChamCong
(
	ID int primary key,
	Ngay datetime,
	MaCN nvarchar(50) foreign key references Congnhan(MaCN),
	MaSP nvarchar(50) foreign key references SanPham(MaSP),
	SoSP int
)
create view DScongnhan as select MaCN, TenCN, NgaySinh, TenTo, TongTienCong from CongNhan inner join ToCongNhan on CongNhan.MaTo=ToCongNhan.MaTo where CongNhan.TongTienCong>'10000000'

Create function f_MaCN (@MaTo nvarchar(20)) returns nvarchar(50)
AS
BeGin
Declare @So int
Declare @MaCN nvarchar(50)
Select @So = Convert(numeric,right(max(MaCN),3)) + 1 from CongNhan where
MaTo=@MaTo
if @So<10
set @MaCN = @MaTo + '00' + Convert(varchar(1),@So)
Else
if @So<100
set @MaCN = @MaTo + '0' + Convert(varchar(2),@So)
Else
set @MaCN = @MaTo + Convert(varchar(3),@So)
Return @MaCN
End