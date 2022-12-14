--Câu 17. Cho bảng quan hệ R (K# - mã thuê bao,TB - tên thuê bao, DC - địa chỉ, CMND- số chứng minh nhân dân,TT - tỉnh thành) tìm tổng số thuê bao được dùng bơi người tên 'Lê Thị Liên'
create table R
(
	MaTB char(10),
	TebTB nvarchar(50),
	DiaChi nvarchar(50),
	CMND int,
	TinhThanh nvarchar(50),
	constraint PK_MaTB primary key (MaTB)
)
select COUNT(MaTB) from R where TebTB=N'Lê Thị Liên'
--18. Cho các bản quan hệ: G (G#-mã giáo viên, TG-tên giáo viên,DC-địa chỉ),D(D#-mã đề tài,TD-tên đề tài,NB-ngày bắt đầu,NK-ngày kết thúc,G#-mã giáo viên)
--S(S#-mã sinh viên,TS-tên sinh viên,D#-mã đề tài)
--Cho biết các giáo viên tên ở khoa CNTT không hướng dẫn đề tài nào bắt đầu trong năm 2014 bằng SQL
create table G
(
	G# char(10),
	TG nvarchar(50),
	DC nvarchar(50),
	constraint PK_G# primary key (G#)
)
create table D
(
	D# char(10),
	TD nvarchar(50),
	NB date,
	NK date,
	G# char(10),
	constraint PK_D# primary key (D#)
)
create table S
(
	S# char(10),
	TS nvarchar(50),
	D# char(10),
	constraint PK_S primary key (S#)
)
alter table G add constraint FK_G_D foreign key (G#) references G(G#);
alter table s add constraint FK_S_D foreign key (D#) references D(D#);
select G.TG,COUNT(D.D#) from G left join D on G.G#=D.G# where YEAR(D.NB) = 2014 group by G.TG having COUNT(D.D#)=0


