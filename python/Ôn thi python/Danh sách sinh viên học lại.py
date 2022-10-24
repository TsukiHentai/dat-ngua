class sinhvien:
    def __init__(self):
        self.ten=None
        self.ma=None
        self.diemtoan=None
        self.diemtriet=None
        self.diemLTC=None
    def nhap(self):
        self.ten,self.ma,self.diemtoan,self.diemtriet,self.diemLTC=input().split()
        self.ma=int(self.ma)
        self.diemtoan=float(self.diemtoan)
        self.diemtriet=float(self.diemtriet)
        self.diemLTC=float(self.diemLTC)
    def dtb(self):
        return (self.diemtoan+self.diemtriet+self.diemLTC)/3
n=int(input())
ds=[]
for i in range(n):
    sv=sinhvien()
    sv.nhap()
    ds .append(sv)
print("Danh sach sinh vien hoc lai")
dem=0
for i in range(n):
    if (ds[i].diemtoan<4 and ds[i].diemtriet<4)or(ds[i].diemtoan<4 and ds[i].diemLTC<4)or(ds[i].diemtriet<4 and ds[i].diemLTC<4):
        dem+=1
        print("%d %s %.2f %.2f %.2f %.2f"%(ds[i].ma,ds[i].ten,ds[i].diemtoan,ds[i].diemtriet,ds[i].diemLTC,ds[i].dtb()))
print("Danh sach nay co %d sinh vien phai hoc lai"%dem)