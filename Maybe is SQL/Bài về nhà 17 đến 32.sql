--19.
select TD,TG From D inner join G on D.G#=G.G# where DC=N'Khoa CNTT'
--20.
select * from R where TB=N'Nguyễn Văn Hùng'
--21.
select TT,COUNT(SDT) from R group by TT
--22.
select TD,TG,TS from G inner join D on G.G#=D.G# inner join S on D.D#=S.D#
--23.
create table R1
(
	K# char(10),
	KH nvarchar(50),
	DC nvarchar(50),
	TK int,
	constraint PK_R1 primary key (K#)
)
select * from R1 where TK<238
--24.
select DC,SUM(TK) as SoDU from R1 group by DC
--25.
select D.D#,TD,TS from D inner join S on D.D#=S.D# where YEAR(NK)=2014
--26.
select SDT,TB from R 
--27.
select COUNT(SDT) as TongTB from R
--28.
select D.D#,TD,TG from D inner join G on D.G#=G.G# where YEAR(NB)=2014 or YEAR(NK)=2014
--29.
create table S1
(
	S# char(10),
	TS nvarchar(50),
	G int,
	constraint PK_S1 primary key (S#)
)
create table N1
(
	N# char(10),
	TN nvarchar(50),
	constraint PK_N1 primary key (N#)
)
create table C1
(
	C# char(10),
	NG date,
	S# char(10),
	N# char(10),
	SL int,
	TT int,
	constraint PK_C# primary key (C#)
)
alter table C1 add constraint FK_C1_S1 foreign key(S#) references S1(S#);
alter table C1 add constraint FK_C1_N1 foreign key (N#) references N1(N#);
select N.N#,TN,SUM(TT)
--31.
select S1.S#,TS from S1 inner join C1 on C1.S#=S1.S# inner join N1 on C1.N#=N1.N# where N1.N#=368 and DAY(NG)=day(GETDATE())
--32.
select K#,TB,SDT from R where TT=N'Hải Phòng'