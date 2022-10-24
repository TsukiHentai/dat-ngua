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
for i in range(n):
    for j in range(n):
        if ds[i].luong()>ds[j].luong():
            temp=ds[i]
            ds[i]=ds[j]
            ds[j]=temp
print("Danh sah nhan vien da sap xep: %d"%n)
for i in range(n):
    print("%d %s %.2f %d %.2f"%(ds[i].ma,ds[i].ten,ds[i].hsl,ds[i].phucap,ds[i].luong()))