alter table tblNhanVien add constraint FK_NhanVien foreign key (MaPB)references tblPhongBan(MaPB)
alter table tblPhanCong add constraint FK_PhanCong foreign key (MaNV) references tblNhanVien(MaNV)
alter table tblPhanCong add constraint FK_DuAn foreign key (MaDA) references tblDuAn(MaDA)