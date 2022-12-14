create database dbQLYHOCSINH
go
use dbQLYHOCSINH
go 
create table HocSinh
(
	MaHS char(5) not null,
	TenHS nvarchar(50) not null,
	NamSinh int,
	Lop char(4),
	DiemThi decimal(3,1),
	constraint PK_HocSinh primary key (MaHS)
)
go
insert into HocSinh values('HS001',N'Nguyễn Văn An',2003,'10A1',6)
insert into HocSinh values('HS002',N'Nguyễn Văn Binh',2004,'10A1',4)
insert into HocSinh values('HS003',N'Nguyễn Văn Cung',2004,'10A1',3)
insert into HocSinh values('HS004',N'Nguyễn Văn Dũng',2003,'10A1',2)
insert into HocSinh values('HS005',N'Nguyễn Văn Dưỡng',2003,'11B1',5)
insert into HocSinh values('HS006',N'Nguyễn Văn Thái',2003,'11B1',7)
insert into HocSinh values('HS007',N'Nguyễn Lê Cung',2002,'11B1',9)
insert into HocSinh values('HS008',N'Nguyễn Thái An',2002,'11B1',3)
insert into HocSinh values('HS009',N'Nguyễn Vũ Cường',2002,'12C1',4)
insert into HocSinh values('HS010',N'Nguyễn Văn Ân',2002,'12C1',3)
insert into HocSinh values('HS011',N'Nguyễn Văn Ngân',2001,'12C1',5)
insert into HocSinh values('HS012',N'Nguyễn Văn Chân',2001,'12C1',2)
go
--Thống kê số học sinh mỗi lớp ( Gộp nhóm theo cột lớp)
select Lop,count(*) as SiSo from HocSinh group by (Lop)
--Thống kê trung bình điểm thi của học sinh mỗi lớp(Having lọc dữ liệu trong cột phái sinh)(where lọc dữ liệu có sẵn trong bảng)
select Lop,count(*)as SiSo,AVG(DiemThi) as DiemTB from HocSinh group by (Lop) having AVG(DiemThi)>4
--Thống kê sĩ số, mức điểm cao nhất và thấp nhất mỗi lớp
select Lop,count(*) as SiSo, MAX(DiemThi) as DiemCaoNhat,MIN(DiemThi) as DiemThapNhat from HocSinh group by (Lop)
--
select * from HocSinh order by Lop desc
select * from HocSinh order by DiemThi
select * from HocSinh order by NamSinh desc
select * from HocSinh order by Lop desc,DiemThi asc