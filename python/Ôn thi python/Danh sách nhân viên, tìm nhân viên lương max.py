class nhanvien:
    def __init__(self):
        self.ten=None
        self.ma=None
        self.hsl=None
        self.phucap=None
    def nhap(self):
        self.ten,self.ma,self.hsl,self.phucap=input().split()
        self.ma=int(self.ma)
        self.hsl=float(self.hsl)
        self.phucap=int(self.phucap)
    def luong(self):
        return self.hsl*2000000+self.phucap
ds=[]
n=int(input())
for i in range(n):
    nv=nhanvien()
    nv.nhap()
    ds.append(nv)
max=0
vitri=0
for i in range(n):
    if ds[i].luong()>max:
        max=ds[i].luong()
        vitri=i
print("Nhan vien co luong lon nhat")
print("%d %s %.2f %d %.2f"%(ds[vitri].ma,ds[vitri].ten,ds[vitri].hsl,ds[vitri].phucap,ds[vitri].luong()))