select * from DUAN
-- select top(n) lấy n số bản ghi tính từ đầu tiên
select * from NhanVien inner join DonVi on NhanVien.MaDV=DonVi.MaDV

alter table NhanVien add NgaySinh date
--1.Cho biết những NV(MaNV,TenNV,NgaySinh) thuộc đơn vị'Đơn vị 101'
select NhanVien.MaNV,NhanVien.TenNV,NhanVien.NgaySinh from NhanVien inner join DonVi on NhanVien.MaDV=DonVi.MaDV
where DonVi.TenDV=N'Đơn vị 101'
--2.Cho biết danh sách nhan viên thuộc đơn vị có mã là 01, sắp xếp theo tên, cùng tên theo ngày sinh
select NhanVien.* from NhanVien where MaDV=01 order by TenNV desc
--3.Tìm nhân viên có họ "Vũ" và tuổi trên 30
select * from NhanVien where TenNV like N'Vũ%' and YEAR(getdate())-year(NgaySinh)>30
--4.Tìm  nhân viên có địa chỉ Hải Phòng, thuộc đơn vị có tên 'Đơn vị 101'
select NhanVien.* from NhanVien inner join DonVi on NhanVien.MaDV=DonVi.MaDV where DiaChi like N'%Hải Phòng%' and TenDV like N'Đơn vị 101' and year(getdate())-YEAR(NgaySinh) < 40
--5.Cho biết nhưng dự án bắt đầu từ năm 2016 do đơn vị có tên 'Đơn vị 102' phụ trách
select DUAN.* from DUAN inner join DonVi on DonVi.MaDV=DUAN.MaDV where YEAR(NgayBO)>=2016 and DonVi.TenDV like N'Đơn vị 102'
--6.Cho biết những người thân của NV có tên là 'Hùng' thuộc địa chỉ'Hà Nội'
select ThanNhan.* from ThanNhan inner join NhanVien on ThanNhan.MaNV=NhanVien.MaDV where NhanVien.TenNV like N'%Hùng%' and NhanVien.DiaChi like N'%Hà Nội%'
--7.Cho biết những người thân của NV có tên là 'Hùng' thuộc địa chỉ 'Hà Nội'
select ThanNhan.* from ThanNhan inner join NhanVien on NhanVien.MaNV=ThanNhan.MaNV where NhanVien.TenNV like N'%Hùng%' and DiaChi like N'%Hà Nội%'
--7.Cho biết những nhân viên tham gia vào dự án có tên là 'Xây dựng phần mềm quản lý giao nhận cảng Nam Ninh, HP'
select NhanVien.* from NhanVien inner join ThamGia on NhanVien.MaNV=ThamGia.MaNV inner join DUAN on ThamGia.MaDA=DUAN.MaDA where DUAN.TenDA=N'Xây dựng phần mềm quản lý giao nhận cảng Nam Ninh, HP'
--8.cho biết giờ tham gia các dự án (TenDA, SoGio) của nhân viên 'Bùi Tuấn Anh'
select DUAN.TenDA, ThamGia.SoGio from DUAN inner join ThamGia on DUAN.MaDA=ThamGia.MaDA where NhanVien.TenNV=N'Bùi Tuấn Anh'
--9.Cho biết tổng số giờ các nhan viên tham gia dự án có mã 'DA01'
select DUAN.TenDA,SUM(SoGio) from ThamGia inner join DUAN on ThamGia.MaDA=DUAN.MaDA where ThamGia.MaDA='DA01'group by DUAN.TenDA, DUAN.MaDA
--10.Cho biết trung binh số giờ tham gia, tổng số nhân viên tham gia,số giờ cao nhất, số giờ thấp nhất
select AVG(SoGio) as N'Trung bình số giờ',SUM(MaNV),MAX(SoGio),MIN(SoGio) from ThamGia
--11.Tính tổng số giờ tham gia cho từng dự án(MaDA,TenDA,TongGio)
select DUAN.MaDA,DUAN.TenDA,SUM(ThamGia.SoGio) from DUAN inner join ThamGia on DUAN.MaDA=ThamGia.MaDA group by DUAN.MaDA,DUAN.TenDA
--12.Tính tổng số giờ tham gia cho từng nhân viên(MaNV, TenNV, TongGio)
select NhanVien.MaDV,NhanVien.TenNV,SUM(ThamGia.SoGio) as 'Tổng giờ' from NhanVien inner join ThamGia on NhanVien.MaNV=ThamGia.MaNV group by NhanVien.MaNV, NhanVien.TenNV