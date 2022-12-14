create database HangKhong
go
use HangKhong
go
create table CHUYENBAY
(
	MaCB char(5),
	GaDi varchar(50),
	GaDen varchar(50),
	DoDai int,
	GioDi time,
	GioDen time,
	ChiPhi int,
	constraint PK_CHUYENBAY primary key(MaCB)
)
create table MAYBAY
(
	MaMB int,
	Loai varchar(50),
	TamBay int,
	constraint PK_MAYBAY primary key(MaMB)
)
create table NHANVIEN
(
	MaNV char(9),
	Ten varchar(50),
	Luong int,
	constraint PK_NHANVIEN primary key(MaNV)
)
create table CHUNGNHAN
(
	MaNV char(9),
	MaMB int,
	constraint PK_CHUNGNHAN primary key(MaNV,MaMB)
)
alter table CHUNGNHAN add constraint FK_CHUNGNHAN_NHANVIEN foreign key(MaNV) references NHANVIEN(MANV);
alter table CHUNGNHAN add constraint FK_CHUNGNHAN_MAYBAY foreign key (MaMB) references MAYBAY(MaMB);
insert into CHUYENBAY values('VN431','SGN','CAH',3693,'5:55','6:55',236);
insert into CHUYENBAY values('VN320','SGN','DAD',2798,'6:00','7:10',221);
insert into CHUYENBAY values('VN464','SGN','DLI',2002,'7:20','8:05',225);
insert into CHUYENBAY values('VN216','SGN','DIN',4170,'10:30','14:20',262);
insert into CHUYENBAY values('VN280','SGN','HPH',11979,'6:00','8:00',1279);
insert into CHUYENBAY values('VN254','SGN','HUI',8765,'18:40','20:00',781);
insert into CHUYENBAY values('VN338','SGN','BMV',4081,'15:25','16:25:00',375);
insert into CHUYENBAY values('VN440','SGN','BMV',4081,'18:30','19:30',426);
insert into CHUYENBAY values('VN651','DAD','SGN',2798,'19:30','8:00',221);
insert into CHUYENBAY values('VN276','DAD','CXR',1283,'9:00','12:00',203);
insert into CHUYENBAY values('VN374','HAN','VII',510,'11:40','13:25',120);
insert into CHUYENBAY values('VN375','VII','CXR',752,'14:15','16:00',181);
insert into CHUYENBAY values('VN269','HAN','CXR',1262,'14:10','15:50',202);
insert into CHUYENBAY values('VN315','HAN','DAD',134,'11:45','13:00',112);
insert into CHUYENBAY values('VN317','HAN','UIH',827,'15:00','16:15',190);
insert into CHUYENBAY values('VN741','HAN','PXU',395,'6:30','8:30',120);
insert into CHUYENBAY values('VN474','PXU','PQC',1586,'8:40','11:20',102);
insert into CHUYENBAY values('VN476','UIH','PQC',485,'9:15','11:50',117);
insert into MAYBAY values('747','Boeing 747 - 400',13488);
insert into MAYBAY values('737','Boeing 737 - 800',5413);
insert into MAYBAY values('340','Airbus A340 - 300',11392);
insert into MAYBAY values('757','Boeing 757 - 300',6416);
insert into MAYBAY values('777','Boeing 777 - 300',10306);
insert into MAYBAY values('767','Boeing 767 - 400ER',10360);
insert into MAYBAY values('320','Airbus A320',4168);
insert into MAYBAY values('319','Airbus A319',2888);
insert into MAYBAY values('727','Boeing 727',2406);
insert into MAYBAY values('154','Tupolev 154',6565);
insert into CHUNGNHAN values('567354612','747');
insert into CHUNGNHAN values('567354612','737');
insert into CHUNGNHAN values('567354612','757');
insert into CHUNGNHAN values('567354612','777');
insert into CHUNGNHAN values('567354612','767');
insert into CHUNGNHAN values('567354612','727');
insert into CHUNGNHAN values('567354612','340');
insert into CHUNGNHAN values('552455318','737');
insert into CHUNGNHAN values('552455318','319');
insert into CHUNGNHAN values('552455318','747');
insert into CHUNGNHAN values('552455318','767');
insert into CHUNGNHAN values('390487451','340');
insert into CHUNGNHAN values('390487451','320');
insert into CHUNGNHAN values('390487451','319');
insert into CHUNGNHAN values('274878974','757');
insert into CHUNGNHAN values('274878974','767');
insert into CHUNGNHAN values('274878974','154');
insert into CHUNGNHAN values('310454876','154');
insert into CHUNGNHAN values('142519864','747');
insert into CHUNGNHAN values('142519864','757');
insert into CHUNGNHAN values('142519864','777');
insert into CHUNGNHAN values('142519864','767');
insert into CHUNGNHAN values('142519864','737');
insert into CHUNGNHAN values('142519864','340');
insert into CHUNGNHAN values('142519864','320');
insert into CHUNGNHAN values('269734834','747');
insert into CHUNGNHAN values('269734834','737');
insert into CHUNGNHAN values('269734834','340');
insert into CHUNGNHAN values('269734834','757');
insert into CHUNGNHAN values('269734834','777');
insert into CHUNGNHAN values('269734834','767');
insert into CHUNGNHAN values('269734834','320');
insert into CHUNGNHAN values('269734834','319');
insert into CHUNGNHAN values('269734834','727');
insert into CHUNGNHAN values('269734834','154');
insert into CHUNGNHAN values('242518965','737');
insert into CHUNGNHAN values('242518965','757');
insert into CHUNGNHAN values('141582651','737');
insert into CHUNGNHAN values('141582651','757');
insert into CHUNGNHAN values('141582651','767');
insert into CHUNGNHAN values('011564812','737');
insert into CHUNGNHAN values('011564812','757');
insert into CHUNGNHAN values('574489457','154');
insert into NHANVIEN values('242518965','Tran Van Son',120433);
insert into NHANVIEN values('141582651','Doan Thi Mai',178345);
insert into NHANVIEN values('011564812','Ton Van Quy',153972);
insert into NHANVIEN values('567354612','Quan Cam Ly',256481);
insert into NHANVIEN values('552455318','La Que',1017450);
insert into NHANVIEN values('550156548','Nguyen Thi Cam',205187);
insert into NHANVIEN values('390487451','Le Van Luat',212156);
insert into NHANVIEN values('274878974','Mai Quoc Minh',99890);
insert into NHANVIEN values('254099823','Nguyen Thi Quynh',24450);
insert into NHANVIEN values('356187925','Nguyen Vinh Bao',44740);
insert into NHANVIEN values('355548984','Tran Thi Hoai An',212156);
insert into NHANVIEN values('310454876','Ta Van Do',212156);
insert into NHANVIEN values('489456522','Nguyen Thi Quy Linh',127984);
insert into NHANVIEN values('489221823','Bui Quoc Chinh',23980);
insert into NHANVIEN values('548977562','Le Van Quy',84476);
insert into NHANVIEN values('310454877','Tran Van Hao',33546);
insert into NHANVIEN values('142519864','Nguyen Thi Xuan Dao',227489);
insert into NHANVIEN values('269734834','Truong Tuan Anh',289950);
insert into NHANVIEN values('287321212','Duong Van Minh',48090);
insert into NHANVIEN values('552455348','Bui Thi Dung',92013);
insert into NHANVIEN values('248965255','Tran Thi Ba',43723);
insert into NHANVIEN values('159542516','Le Van Ky',48250);
insert into NHANVIEN values('348121549','Nguyen Van Thanh',32899);
insert into NHANVIEN values('574489457','Bui Van Lap',20);
--1.Cho biết các chuyến bay đi Đà Lạt
select * from CHUYENBAY where GaDen='DAD'
--2.Cho biết các máy bay có tầm bay hơn 10000km
select * from MAYBAY where TamBay>10000
--3.Cho biết các nhân viên có lương nhỏ hơn 10000
select * from NHANVIEN where Luong<10000
--4.Liệt kê các chuyến bay nhỏ hơn 10000km và lớn hơn 8000km
select * from CHUYENBAY where DoDai<10000 and DoDai>8000
--5.Cho biết các chuyến bay từ Sài Gòn đến BM thuật
select * from CHUYENBAY where GaDi='SGN' and GaDen='BMV'
--6.Có bao nhiêu chuyến bay xuất phát từ Sài Gòn
select COUNT(MaCB) as Sochuyenbay from CHUYENBAY where GaDi='SGN'
--7.Có bao nhiêu loại máy bay Boeing
select COUNT(*) as Soloaimaybay from MAYBAY where Loai like 'Boeing%'
--8.Tổng lương phải trả cho các nhân viên
select SUM(Luong) as tongluong from NHANVIEN 
--9.Cho biết mã số của các phi công lái máy bay Boeing
select distinct NHANVIEN.MaNV from NHANVIEN inner join CHUNGNHAN on NHANVIEN.MaNV=CHUNGNHAN.MaNV inner join MAYBAY on MAYBAY.MaMB=CHUNGNHAN.MaMB where Loai like 'Boeing%'
--10.Cho biết các nhân viên có thể lái máy bay có mã số 747
select NHANVIEN.* from NHANVIEN inner join CHUNGNHAN on NHANVIEN.MaNV=CHUNGNHAN.MaNV where MaMB='747'
--11.Cho biết mã số của các loại máy bay mà nhân viên có họ Nguyễn có thể lái
select MAYBAY.MaMB from MAYBAY inner join CHUNGNHAN on MAYBAY.MaMB=CHUNGNHAN.MaMB inner join NHANVIEN on NHANVIEN.MaNV=CHUNGNHAN.MaNV where Ten like 'Nguyen%'
--12.Cho biết mã số của các phi công vừa lái được Boeing vừa lái ñược Airbus
select X.MaNV from
(select distinct NHANVIEN.MaNV from NHANVIEN inner join CHUNGNHAN on NHANVIEN.MaNV=CHUNGNHAN.MaNV inner join MAYBAY on MAYBAY.MaMB=CHUNGNHAN.MaMB where MAYBAY.Loai like 'Airbus%')X inner join
(select distinct NHANVIEN.MaNV from NHANVIEN inner join CHUNGNHAN on NHANVIEN.MaNV=CHUNGNHAN.MaNV inner join MAYBAY on MAYBAY.MaMB=CHUNGNHAN.MaMB where MAYBAY.Loai like 'Boeing%')Y
on X.MaNV=Y.MaNV
--15.Cho biết tên các phi công lái máy bay Boeing
select distinct NHANVIEN.Ten from NHANVIEN inner join CHUNGNHAN on NHANVIEN.MaNV=CHUNGNHAN.MaNV inner join MAYBAY on MAYBAY.MaMB=CHUNGNHAN.MaMB where Loai like 'Boeing%'
--16.Với mỗi loại máy bay có phi công lái cho biết mã số, loại máy báy và tổng số phi công có thể lái loại máy bay đó
select MAYBAY.MaMB,MAYBAY.Loai, count(CHUNGNHAN.MaNV) from MAYBAY inner join CHUNGNHAN on CHUNGNHAN.MaMB=MAYBAY.MaMB group by MAYBAY.MaMB,MAYBAY.Loai
--17.Giả sử một hành khách muốn ñi thẳng từ ga A ñến ga B rồi quay trở về ga A. Cho biết các ñường bay nào có thể ñáp ứng yêu cầu này.select CHUYENBAY.MaCB, from CHUYENBAY--18.Với mỗi ga có chyến bay xuất phát từ đó cho biết có bao nhiêu chuyến bay khởi hành từ ga đóselect CHUYENBAY.GaDi,count(CHUYENBAY.MaCB) from CHUYENBAY group by CHUYENBAY.GaDI--20.Với mỗi ñịa ñiểm xuất phát cho biết có bao nhiêu chuyến bay có thể khởi hành trước 12:00.select CHUYENBAY.GaDi,count(CHUYENBAY.GioDi) from CHUYENBAY where datepart(hour,CHUYENBAY.GioDi)<12 group by CHUYENBAY.GaDi--21.Cho biết mã số của các phi công chỉ lái được 3 loại máy bayselect NHANVIEN.MaNV from NHANVIEN inner join CHUNGNHAN on NHANVIEN.MaNV=CHUNGNHAN.MaNV group by NHANVIEN.MaNV having count(CHUNGNHAN.MaMB)=3--22.Với mỗi phi công có thể lái nhiều hơn 3 loại máy bay, cho biết mã số phi công và tầm bay lớn nhất của các loại máy bay mà phi công ñó có thể láiselect X.MaNV,max(MAYBAY.TamBay) fromnhan