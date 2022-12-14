select distinct ChuyenMon,MaPB from NhanVien
--Loải bỏ các bản ghi trùng lặp và gộp lại thành 1 trong tập kết quả.
select top (4) * from NhanVien
--top n: Lấy n dòng đầu tiên trong tập kết quả
select COUNT(*) as SoDong from NhanVien
--COUNT: Đếm số dòng
select COUNT(MaPB) as SoMaPB from NhanVien
--Đếm số MaPB
select COUNT(distinct MaPB) as SoMaPB from NhanVien
select MaPB, COUNT(*) as SoLuongNV from NhanVien group by (MaPB) having(COUNT(*)>= 3)
select * from NhanVien
select * from NhanVien inner join PhongBan on NhanVien.MaPB=PhongBan.MaPB
select NhanVien.*,DiaDiem from NhanVien inner join PhongBan on NhanVien.MaPB=PhongBan.MaPB
select  NhanVien.MaPB,DiaDiem from NhanVien inner join PhongBan on NhanVien.MaPB=PhongBan.MaPB

select NhanVien.MaPB,TenPB,COUNT(*) as SoLuongNV
from NhanVien inner join PhongBan on NhanVien.MaPB=PhongBan.MaPB
group by NhanVien.MaPB,TenPB having NhanVien.MaPB='PKT'
--Trong 1 câu lệnh truy vấn có câu lệnh group by, tất cả cột của bảng, muốn xuất hiện sau select phải được xuất hiện trong group by

select * from PhongBan left outer join NhanVien on NhanVien.MaPB=PhongBan.MaPB
select * from NhanVien right outer join PhongBan on NhanVien.MaPB=PhongBan.MaPB
select * from PhongBan cross join NhanVien

use dbQLYHOCSINH
go
select * from HocSinh order by DiemThi desc
select * from HocSinh order by Lop desc,DiemThi asc