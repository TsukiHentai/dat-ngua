class khachhang:
    def __init__(self):
        self.ma=None
        self.ten=None
        self.dauky=None
        self.cuoiky=None
    def nhap(self):
        self.ten,self.ma,self.dauky,self.cuoiky=input().split()
        self.dauky=int(self.dauky)
        self.cuoiky=int(self.cuoiky)
    def tien(self):
        if self.ma[0]=="D":
            return (self.cuoiky-self.dauky)*1050
        if self.ma[0]=="K":
            return (self.cuoiky - self.dauky) * 1070
        if self.ma[0]=="H":
            return (self.cuoiky - self.dauky) * 1000
n=int(input())
ds=[]
for i in range(n):
    kh=khachhang()
    kh.nhap()
    ds.append(kh)
demkinhdoanh=0
max=0
vitri=0
for i in range(n):
    if ds[i].tien()>max and ds[i].ma[0]=="K":
        max=ds[i].tien()
        vitri=i
        demkinhdoanh+=1
if demkinhdoanh==0:
    print("Khong co khach hang la ho kinh hoanh.")
else:
    print("%s %s %d %d %d %d"%(ds[vitri].ten,ds[vitri].ma,ds[vitri].dauky,ds[vitri].cuoiky,ds[vitri].cuoiky-ds[vitri].dauky,ds[vitri].tien()))