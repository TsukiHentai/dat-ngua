--Câu 3: viết câu lệnh truy vấn thông tin
--Liệt kê các nhân viên họ "Vũ" và trình độ chuyên môn "Kỹ Sư"
select * from NhanVien where (TenNV like N'Vũ %')and (ChuyenMon like N'Kỹ Sư %')
--Liệt kê các nhân viên họ "Trần" và mã phòng ban là "PKD"
select * from NhanVien where (TenNV like N'Trần %') and (MaPB='PKD')
--Liệt kê các nhân viên có mã "PKD" và sinh tháng 5
select * from NhanVien where (MaPB='PKD') and (MONTH(NgaySinh)=5)
--Liệt kê các nhân viên có trình độ chuyên môn là "Kỹ sư" và sinh trước năm 1995
select MaNV,TenNV,YEAR(NgaySinh) as NamSinh,ChuyenMon from NhanVien where (ChuyenMon like N'Kỹ sư %') and (year(NgaySinh)<1995)
--Xác định dữ án "DA03" có bao nhiêu nhân viên làm việc
select count (*) as SoLuongNV from PhanCong where MaDa='DA03'
--Xác định nhân viên mã "NV001" tham gia bao nhiêu dự án
select COUNT (*) as SoLuongDA from PhanCong where MaNV='NV001'
--Xác định bảo nhiêu nhân viên sinh tháng 5
select COUNT(*) as SoNVSinhThang5 from NhanVien where MONTH(NgaySinh)=5
--end 