--Trước khi thực hành với mệnh đề join, làm quen với 02 từ khóa thường dùng trong select:
--đó là: distinct, top
--top: Dùng khi muốn lấy về 1 số hạn định các dòng đầu tiên được trả về.
--Cú pháp: top <số dòng muốn lấy>
select top 3 * from HocSinh

select distinct NamSinh,Lop from HocSinh

select distinct COUNT(distinct Lop) as SoLop from HocSinh
