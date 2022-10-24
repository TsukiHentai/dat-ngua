create database quanlytv
Go
use quanlytv
Go

create table THELOAI
(
Ma_loai nvarchar(50) ,
Ten_loai nvarchar(100) ,
constraint PK_THELOAI primary key (Ma_loai)
)
create table NXB
(
Ma_NXB char(10) ,
Ten_NXB nvarchar(50) ,
Dia_chi nvarchar(100) ,
Email nvarchar(50) ,
constraint PK_NXB primary key (Ma_NXB)
)
create table THUTHU
(
Ma_TT char(10) ,
Ten_TT nvarchar(50) ,
Ngay_sinh date ,
SDT char(10) ,
Gioi_tinh bit ,
constraint PK_THUTHU primary key (Ma_TT)
)
create table THE_DG
(
Ma_DG char(10) ,
Ten_DG nvarchar(100) ,
Ngay_het_han date ,
SDT char(10) ,
Email nvarchar(50) ,
constraint PK_THE_DG primary key (Ma_DG)
)
create table SACH
(
Ma_sach nvarchar(50) ,
Ten_sach nvarchar(100) ,
Don_gia float ,
Trang_thai bit ,
Ten_TG nvarchar(100) ,
Ma_NXB char(10) ,
Ma_loai nvarchar(50) ,
constraint PK_SACH primary key (Ma_sach),
constraint FK_SACH1 foreign key (Ma_NXB) references NXB(Ma_NXB),
constraint FK_SACH2 foreign key (Ma_loai) references THELOAI(Ma_loai)
)
create table PMT
(
Ma_phieu char(10) ,
Ma_DG char(10) ,
Ngay_muon date ,
Ma_TT char(10) ,
constraint PK_PMT primary key (Ma_phieu),
constraint FK_PMT1 foreign key (Ma_TT) references THUTHU(Ma_TT),
constraint FK_PMT2 foreign key (Ma_DG) references THE_DG(Ma_DG)
)
create table CTPMT
(
Ma_phieu char(10) ,
Ma_sach nvarchar(50) ,
constraint PK_CTPMT primary key (Ma_phieu,Ma_sach),
constraint FK_CTPMT1 foreign key (Ma_phieu) references PMT(Ma_phieu),
constraint FK_CTPMT2 foreign key (Ma_sach) references SACH(Ma_sach)
)

Alter Table PMT
ADD NgayTra Date
update PMT
Set PMT.NgayTra = '2020-10-20' WHERE Ma_phieu = 'MP01'
update PMT
set PMT.NgayTra = '2020-11-20' WHERE Ma_phieu = 'MP02'
update PMT
set PMT.NgayTra = '2020-12-20' WHERE Ma_phieu = 'MP03'
INSERT INTO THE_DG (Ma_DG,Ten_DG,Ngay_het_han,SDT,Email) VALUES ('DG01', N'Trần Hồng An', '2020-08-20', '0123456789', N'khon35gmail.com')
INSERT INTO THE_DG (Ma_DG,Ten_DG,Ngay_het_han,SDT,Email) VALUES ('DG02', N'Nguyễn Văn B', '2020-06-21', '0987654321', N'hhon15gmail.com')
INSERT INTO THE_DG (Ma_DG,Ten_DG,Ngay_het_han,SDT,Email) VALUES ('DG03', N'Nguyễn Văn C', '2020-07-22', '0123456789', N'hon12gmail.com')
INSERT INTO THELOAI(Ma_loai,Ten_loai) VALUES ('ML01', N'Trinh Thám')
INSERT INTO THELOAI(Ma_loai,Ten_loai) VALUES ('ML02', N'Trinh Thám')
INSERT INTO THELOAI(Ma_loai,Ten_loai) VALUES ('ML03', N'Tình Cảm')
INSERT INTO NXB    (Ma_NXB,Ten_NXB,Dia_chi,Email) Values('NXB01', N'Kim Đồng 1', N' Số 1 Trần Phú', N'Hgmail.com')
INSERT INTO NXB    (Ma_NXB,Ten_NXB,Dia_chi,Email) Values('NXB02', N'Kim Đồng 2', N' Số 2 Trần Phú', N'H1gmail.com')
INSERT INTO NXB    (Ma_NXB,Ten_NXB,Dia_chi,Email) Values('NXB03', N'Kim Đồng 3', N' Số 3 Trần Phú', N'H2gmail.com')
INSERT INTO THUTHU (Ma_TT,Ten_TT,Ngay_sinh,SDT,Gioi_tinh) VaLues('TT01', N'Trần Minh A', '1999-05-20', '01234567',0)
INSERT INTO THUTHU (Ma_TT,Ten_TT,Ngay_sinh,SDT,Gioi_tinh) VaLues('TT02', N'Trần Minh T', '2000-06-21', '09232323',0)
INSERT INTO THUTHU (Ma_TT,Ten_TT,Ngay_sinh,SDT,Gioi_tinh) VaLues('TT03', N'Trần Minh H', '1900-07-22', '03232323',0)
INSERT INTO PMT    (Ma_phieu,Ma_DG,Ngay_muon,Ma_TT) VALUES ('MP01', 'DG01', '2020-09-20', 'TT01')
INSERT INTO PMT    (Ma_phieu,Ma_DG,Ngay_muon,Ma_TT) VALUES ('MP02', 'DG02', '2020-07-22', 'TT02')
INSERT INTO PMT    (Ma_phieu,Ma_DG,Ngay_muon,Ma_TT) VALUES ('MP03', 'DG03', '2020-08-22', 'TT03')
INSERT INTO SACH   (Ma_sach,Ten_sach,Don_gia,Trang_thai,Ten_TG,Ma_NXB,Ma_loai) VALUES ('MS01', N'Thám tử lừng danh', 22000,0, N'Fuji', 'NXB01', 'ML01')
INSERT INTO SACH   (Ma_sach,Ten_sach,Don_gia,Trang_thai,Ten_TG,Ma_NXB,Ma_loai) VALUES ('MS02', N'Doremon', 25000,0, N'Kishimoto', 'NXB02', 'ML02')
INSERT INTO SACH   (Ma_sach,Ten_sach,Don_gia,Trang_thai,Ten_TG,Ma_NXB,Ma_loai) VALUES ('MS03', N'Naruto', 30000,1, 'Oda', 'NXB03', 'ML03')
INSERT INTO CTPMT  (Ma_phieu,Ma_sach) VALUES ('MP01', 'MS01')
INSERT INTO CTPMT  (Ma_phieu,Ma_sach) VALUES ('MP02', 'MS02')
INSERT INTO CTPMT  (Ma_phieu,Ma_sach) VALUES ('MP03', 'MS03')

--Câu 1
Select *From THE_DG
Where Month(Ngay_het_han) = 8
--Câu 2
Select *From THE_DG
WHERE Ten_DG like N'Nguyễn % Vân'
--Câu 3
Select *from SACH
inner join THELOAI
on THELOAI.Ma_loai = SACH.Ma_loai
inner join NXB
on Sach.Ma_NXB = NXB.Ma_NXB
WHERE Ten_loai like N'Trinh Thám' and NXB.Ten_NXB like N'Kim Đồng 1'

--Câu 4 Thống kê số lượng sách đã nhập từ nhà xuất bản Trí Việt. Thông tin hiển thị bao gồm mã nhà xuất bản, tên nhà xuất bản, số lượng.
Select NXB.Ma_NXB, Ten_NXB ,COUNT(SACH.Ma_NXB) as "SoLuong"
From SACH
INNER JOIN NXB
ON SACH.Ma_NXB = NXB.Ma_NXB
GROUP BY NXB.Ma_NXB, Ten_NXB
--Câu 5
Select SACH.* from SACH
INNER JOIN CTPMT
ON SACH.Ma_sach = CTPMT.Ma_sach
INNER JOIN PMT
ON CTPMT.Ma_phieu = PMT.Ma_phieu
INNER JOIN THE_DG
ON PMT.Ma_DG = THE_DG.Ma_DG
WHERE Ngay_muon = '2020-09-20' and Ten_DG like N'Trần Hồng An'
--Câu 6. Tính số ngày mượn sách trung bình của mỗi lượt mượn sách.
Select MA_DG, AVG( DATEDIFF(DAY, NGAY_MUON,NGAYTRA))
FROM CTPMT INNER JOIN PMT 
ON CTPMT.MA_PHIEU=PMT.MA_PHIEU 
GROUP BY MA_DG
--Câu 7 Hiển thị thông tin thủ thư cho mượn sách ngày 26/9/2020. (Trong phần hiển thị giới tính ghi rõ “Nam” hoặc “Nữ”
Select THUTHU.*, 
CASE
WHEN Gioi_tinh = 1 then 'Male'
WHEN Gioi_tinh = 0 then 'Female' 
Else 'Unknow'
END
from THUTHU
INNER JOIN PMT
ON THUTHU.Ma_TT = PMT.Ma_TT
WHERE Ngay_muon = '2020-09-20'
-- Câu 8
select * from ThuThu
where datediff(year,Ngay_sinh,GETDATE()) = (select max(datediff(year,Ngay_sinh,GETDATE())) from ThuThu)
-- Câu 9 
Select Ma_sach, Ten_sach
from SACH
WHERE Trang_thai = 0 
order by Ten_sach asc
--Câu 10
Select THE_DG.Ten_DG,
CASE
WHEN datediff(day,Ngay_Muon,NgayTra) > 60 then 200
WHEN datediff(Day,Ngay_Muon,NgayTra)> 30 then 100
ELSE 0
END as "Sotienphat"
FROM THE_DG
inner join PMT on PMT.Ma_DG = THE_DG.Ma_DG
--Câu 11
select TEN_DG, count(PMT.MA_DG) as "SoLanMuon"
FROM THE_DG 
INNER JOIN PMT ON THE_DG.MA_DG=PMT.MA_DG
GROUP BY TEN_DG 
HAVING COUNT(PMT.MA_DG) >=ALL(select count(PMT.MA_DG)
FROM THE_DG INNER JOIN PMT 
ON THE_DG.MA_DG=PMT.MA_DG 
group by PMT.MA_DG
--Câu 12
--Câu 13
select 
sum (CASE WHEN Gioi_tinh=1 Then 1 else 0 end) as N'Số lượng Nam',
sum (CASE WHEN Gioi_tinh=0 then 1 else 0 end) as N'Số Lượng Nữ'
from THUTHU

select TEN_DG, count(PMT.MA_DG) as "SoLanMuon"
FROM THE_DG 
INNER JOIN PMT ON THE_DG.MA_DG=PMT.MA_DG
GROUP BY TEN_DG 
HAVING COUNT(PMT.MA_DG) >=ALL(select count(PMT.MA_DG)
FROM THE_DG INNER JOIN PMT 
ON THE_DG.MA_DG=PMT.MA_DG 
group by PMT.MA_DG) 
select TOP 1 TEN_DG, count(PMT.MA_DG) 
FROM THE_DG 
INNER JOIN PMT 
ON THE_DG.MA_DG=PMT.MA_DG 
GROUP BY TEN_DG
ORDER BY COUNT(PMT.MA_DG) DESC
--Cau 14Tạo 1 view hiển thị tuổi của thủ thư. Thông tin hiển thị gồm Mã thủ thư, tên thủ thư, tuổi.
create view THUTHU_view AS
Select Ma_TT, Ten_TT, datediff(year, Ngay_Sinh, getdate()) as "Age"
FROM THUTHU
--Câu 15. Tạo 1 view hiển thị thông tin sách được mượn trong tháng 8.
Create view MuonSach_view
as
Select SACH.*
from SACH
INNER JOIN CTPMT
ON SACH.Ma_sach = CTPMT.Ma_sach
INNER JOIN PMT
ON CTPMT.Ma_phieu = PMT.Ma_phieu
INNER JOIN THE_DG
ON PMT.Ma_DG = THE_DG.Ma_DG
WHERE Month(PMT.Ngay_muon) = 8
--Câu 16. Tạo 1 view hiển thị thông tin sách bị trả quá hạn. Thông tin hiển thị gồm tên sách, mã sách, số ngày quá hạn
Create view hethan_view
as 
select SACH.Ten_sach, Sach.Ma_sach, DATEDIFF(day, PMT.Ngay_muon, PMT.NgayTra) - 60
from SACH
inner join CTPMT
on SACH.Ma_sach = CTPMT.Ma_sach
inner join PMT
on CTPMT.Ma_phieu = PMT.Ma_phieu
where datediff(day, Ngay_muon, NgayTra) >= 60
--Câu 17. Tạo 1 view hiển thị thông tin tất cả những cuốn sách được mượn bởi độc giả Nguyễn Vân
create view Muonsach07_view
as
Select SACH.*
from SACH
inner join CTPMT
on CTPMT.Ma_sach = SACH.Ma_sach
inner join PMT
on CTPMT.Ma_phieu = PMT.Ma_phieu
inner join THE_DG
on PMT.Ma_DG = THE_DG.Ma_DG
WHERE Ten_DG like N'Nguyễn Vân'

drop database quanlytv

--Cau 20
--CReate PROC sp_TTSach(@masach nvarchar(10))
--as
--Select *from SACH
--WHERE Ma_sach = @masach
--drop PROC sp_TTSach
--exec sp_TTSach'Sach001'

--cau 18

Create PROC sp_thongtin(@tensach nvarchar(30))
as
if (@tensach = NULL or @tensach not in (select Ten_sach from SACH))
select *from SACH
else select *from SACH where Ten_sach = @tensach

exec sp_thongtin'Doremon'

--cau 19
create proc sp_thangmuon(@thang int)
as
select *from SACH
inner join CTPMT
on SACH.Ma_sach = CTPMT.Ma_sach
inner join PMT
on CTPMT.Ma_phieu = PMT.Ma_phieu
where MONTH(PMT.Ngay_muon) = @thang

exec sp_thangmuon'8'

create proc sp_muonnsach1(@tensach nvarchar(30))
as
select *from SACH
WHERE SACH.Trang_thai = 0
and Ten_sach = @tensach

exec sp_muonnsach1'Naruto'


-- Cau 20
Create Proc tt_dg1
as
select *from THE_DG

exec tt_dg1

--Cau 21
Create Proc tt_dg2 (@madg char(10))
as
Select *from THE_DG
where Ma_DG=@madg

exec tt_dg2'DG01'
--cau 22
Create Proc 
as 
Select *from 

--cau 23
create Proc sosach(@tennxb char(10))
as 
Select COUNT(SACH.Ma_sach) as "So luong sach"
from SACH
inner join NXB
on SACH.Ma_NXB = NXB.Ma_NXB
WHERE Ten_NXB = @tennxb

exec sosach'NXB01'
drop proc sosach


create function ttsv1 (@maloai char(10))
returns table
as
Return (select SACH.* from SACH inner join THELOAI on SACH.Ma_loai = THELOAI.Ma_loai WHERE Sach.Ma_loai = @maloai)

select *from ttsv1('ML01')

create function demsach (@maloai char(10))
returns int
as
begin 
declare @soluong int
select @soluong = COUNT(SACH.Ma_loai) from SACH
where Ma_loai = @maloai
return @soluong
end

select dbo.demsach('ML01')

create function xemdg (@madg char(10))
returns table
as 
return (select *from THE_DG WHERE Ma_DG = @madg)

select *from xemdg('DG01')

create function ttdg(@nxb char(10))
returns int
as 
begin
declare @soluong int
select @soluong = count(Ma_NXB) from SACH
where Ma_NXB = @nxb
return @soluong
end

select dbo.ttdg('NXB01')



create function tttt(@matt char(10))
returns int
as
begin
declare @sotuoi int
select @sotuoi = DATEDIFF(day,THUTHU.Ngay_sinh,GETDATE()) from THUTHU
where Ma_TT = @matt
return @sotuoi
end

select dbo.tttt('TT01')

create trigger ktrangaysinh 
on THUTHU
for Update
as
if (update(Ngay_Sinh))
begin
print 'Ngày nhập vào lớn hơn ngày hiện tại'
rollback Transaction 
end

update THUTHU
set THUTHU.Ngay_sinh = '2021-04-05' where Ma_TT = 'TT01'

create trigger xoatt
on THUTHU
for Delete
as
if 'TT03' in (Select Ma_TT from deleted)
begin 
print 'bang nay khong the xoa'
end

delete from THUTHU where Ma_TT = 'TT03' 

from deleted
create trigger xoatt3
on THE_DG
for Delete
as
--CaulenhSQL
if N'Trần Hồng An' in (Select Ten_DG from deleted)
--
begin 
print 'bang nay khong the xoa'
rollback Transaction 
end 
delete from THE_DG where Ten_DG like N'Trần Hồng An'
--cau

create trigger test
on SACH
for insert
as 
if (select Don_gia from inserted) > 30000
begin
print'dongia khong phu hop'
rollback transaction
end

insert into SACH (Ma_sach,Ten_sach,Don_gia,Trang_thai,Ten_TG,Ma_NXB,Ma_loai) VALUES ('MS06', N'Thám tử lừng danh', 35000,0, N'Fuji', 'NXB01', 'ML01')

--cau 26
alter table PMT
add SoPMT int
create trigger cau26
on PMT
for insert
as
if (select SoPMT from inserted) < 10
begin
print'Sopmt khong duoc nho hon 10'
rollback transaction
end

insert into PMT (Ma_phieu,Ma_DG,Ngay_muon,Ma_TT,SoPMT) VALUES ('MP05', 'DG01', '2020-09-20', 'TT01',11)

--cau 26.1
create trigger cau261
on PMT
for insert
as
declare @soluong int
select @soluong = COUNT(Ma_phieu) from PMT
if (@soluong > 10)
begin
print'Khong vuot qua 10'
rollback transaction
end

alter table CTPMT
add SLM int
alter table SACH
add Soluong int
drop trigger cau27
create trigger cau27
on CTPMT
for update
as
declare @slm int
declare @slsach int
select @slm = inserted.SLM from inserted inner join deleted on inserted.Ma_phieu = deleted.Ma_phieu
select @slsach = Soluong from SACH
if(@slm < 0 and @slm > @slsach) 
begin
print('saiiiii')
rollback transaction
end

update CTPMT
set SLM = -1 where Ma_phieu = 'MP03'

--cau 28
update CTPMT
set SLM = 5
update SACH
set Soluong = 5
create trigger cau28
on CTPMT
for delete
as
update SACH set Soluong = Soluong +SLM from deleted
where sach.Ma_sach = deleted.Ma_sach
begin
print'Huy'
rollback transaction
end

select *from SACH
select *from CTPMT
delete from CTPMT where Ma_phieu = 'MP01'