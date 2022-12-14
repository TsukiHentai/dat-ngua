create table BenhNhan
(
	MaBN char(10),
	TenBN nvarchar(50),
	NgaySinh datetime,
	GioiTinh nchar(10),
	DiaChi nvarchar(100),
	NgayNhapVien datetime,
	constraint PK_BenhNhan primary key (MABN)
)
create table ChiTietKham
(
	ID int identity(1,1),
	MaBN char(10),
	MaBS char(10),
	NgayKham datetime,
	KetLuan nvarchar(100),
	VienPhi float check(VienPhi>0),
	constraint PK_ChiTietKham primary key (ID)
)
create table Khoa
(
	MaKhoa char(10),
	TenKhoa nvarchar(50),
	ChucNang nvarchar(50),
	constraint PK_Khoa primary key (MaKhoa)
)
create table BacSi
(
	MaBS char(10),
	TenBS nvarchar(20),
	MaKhoa char(10),
	constraint PK_BacSi primary key (MaBS)
)
alter table ChiTietKham add constraint FK_BacSi_ChiTietKham foreign key (MaBS) references BacSi(MaBS);
alter table ChiTietKham add constraint FK_ChiTietKham foreign key (MaBN) references BenhNhan(MaBN);
alter table BacSi add constraint FK_BacSi_Khoa foreign key (MaKhoa) references Khoa(MaKhoa)
insert into BenhNhan values('001',N'Nguyễn Văn A','2001-3-12',N'Nam',N'Hải Phòng-Việt Nam','2001-4-14');
insert into BenhNhan values('002',N'Nguyễn Văn B','2001-4-13',N'Nữ',N'Viên Chăn-Việt Nam','2001-5-15');
insert into BenhNhan values('003',N'Nguyễn Văn A','2001-5-14',N'Nam',N'Quảng Đông-Việt Nam','2001-6-16');
insert into Khoa values('0001',N'KS',N'Khám Sản');
insert into Khoa values('0002',N'RHM',N'Răng Hàm Mặt');
insert into Khoa values('0003',N'HT',N'Hỏa Thiêu');
insert into BacSi values('N01',N'Phạm Quang Sáng','0001');
insert into BacSi values('N02',N'Ducdeptraibodoiqua','0002');
insert into BacSi values('N03',N'Ching Chong','0003');
insert into ChiTietKham values('001','N01','2001-3-12',N'Trĩ nội','2100450');
insert into ChiTietKham values('002','N02','2001-4-13',N'Ung thư phổi, dạ dày, gan','14100450');
insert into ChiTietKham values('003','N03','2001-5-14',N'Corona','1929100450');
select Khoa.MaKhoa,Khoa.TenKhoa,Khoa.ChucNang,SUM(VienPhi) as N'Tổng viện phí' from Khoa inner join BacSi on Khoa.MaKhoa=BacSi.MaKhoa inner join ChiTietKham on BacSi.MaBS=ChiTietKham.MaBS group by Khoa.MaKhoa,Khoa.TenKhoa,Khoa.ChucNang
--Liệt kê số bệnh nhân của từng bác sĩ
select BacSi.TenBS,count(ChiTietKham.MaBN)from ChiTietKham left join BacSi on ChiTietKham.MaBS=BacSi.MaBS group by BacSi.TenBS
--Tìm bác sĩ có số bệnh nhân lớn nhất
