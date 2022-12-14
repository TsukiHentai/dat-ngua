create table GiaoVien
(
	MaGV int identity primary key,
	TenGV nvarchar(50),
	DC nvarchar(150),
	NgayVaoCQ datetime,
	SoDT int
)
create table DeTai
(
	MaDT int identity primary key,
	TenDT nvarchar(1000),
	NgayBD datetime,
	NgayKT datetime,
	NoiTT nvarchar(150),
	MaGV int foreign key references GiaoVien(MaGV)
)
create table SinhVien
(
	MaSV nvarchar(20) primary key,
	TenSV nvarchar(50),
	NS datetime,
	MaLop nvarchar(20),
	NamVaoTruong int
)
create table SV_DT
(
	ID int identity primary key,
	MaSV nvarchar(20) foreign key references SinhVien(MaSV),
	MaDT int foreign key references DeTai(MaDT),
	KQ nvarchar(10),
	GhiChu nvarchar(50)
)
--
-- Truy vấn:
-- Cho biết những giáo viên(MaGV,TenGV) có đại chỉ ở "Hải Phòng":
select MaGV, TenGV from GiaoVien where DC=N'Hải Phòng'
-- Cho biết những giáo viên(TenGV, TenDT) hướng dẫn những đề tài bắt đầu từ 2014:
select TenGV, TenDT from GiaoVien inner join DeTai on GiaoVien.MaGV=DeTai.MaGV where YEAR(NgayBD)=2014
-- Cho biết đề tài (TenDT) mà sinh viên lớp 'CNT53DH3' thực hiện kết thúc năm 2015:
select TenDT from DeTai inner join SV_DT on DeTai.MaDT=SV_DT.MaDT where YEAR(NgayKT)=2015 and MaLop='CNT53dh3'
-- Viết một thủ tục để cho biết những đề tài có số sinh viên thực hiện >=2.
create procedure sp_LietKe
as
begin
select Detai.TenDT,COUNT(SV_DT.MaDT) as SoSinhVien from DeTai inner join SV_DT on DeTai.MaDT=SV_DT.MaDT group by SV_DT.MaDT, TenDT having COUNT(SV_DT.MaDT)>=2
end
-- 