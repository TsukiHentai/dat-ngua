class NhanVien:
    def init(self):
        self.ten = None
        self.ma = None
        self.hsl = None
        self.phucap = None

    def nhap(self):
        self.ma, self.ten, self.hsl, self.phucap = input().split()
        self.ma = int(self.ma)
        self.hsl = float(self.hsl)
        self.phucap = int(self.phucap)
    def xuat(self):
        a = self.hsl*2000000+self.phucap
        print("%d %s %.2f %d %.2f"%(self.ma, self.ten, self.hsl, self.phucap,a))
    def tinhluong(self):
        return self.hsl*2000000+self.phucap
n = int(input())
ds = []
for i in range(n):
    nv = NhanVien()
    nv.nhap()
    ds.append(nv)

min = 0
for i in range(1,n):
    if ds[i].tinhluong() < ds[min].tinhluong():
        min = i
print("Nhan vien co luong thap nhat\n%d %s %.2f %d %.2f"%(ds[min].ma,ds[min].ten,ds[min].hsl,ds[min].phucap,ds[min].tinhluong()))
