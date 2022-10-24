class nhanvien:
    def __init__(self):
        self.ten=None
        self.ma=None
        self.hsl=None
        self.phucap=None
    def nhap(self):
        self.ten,self.ma,self.hsl,self.phucap=input().split(' ')
        self.ma=int(self.ma)
        self.hsl=float(self.hsl)
        self.phucap=int(self.phucap)
    def xuat(self):
        a=self.hsl*2000000+self.phucap
        print("%d %s %.2f %d %.2f"%(self.ma,self.ten,self.hsl,self.phucap,a))
    def tinhluong(self):
        return self.hsl*2000000+self.phucap
n=int(input())
ds=[]
for i in range(n):
    nv=nhanvien()
    nv.nhap()
    ds.append(nv)
# sap xep
for i in range(0,n-1):
    for j in range(i+1,n):
        if ds[i].tinhluong()<ds[j].tinhluong():
            temp=ds[i]
            ds[i]=ds[j]
            ds[j]=temp

print("Danh sach nhan vien da sap xep: %d"%n)
for i in range(n):
    ds[i].xuat()