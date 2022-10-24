class SinhVien:
    def init(self):
        self.ten = None
        self.sbd = None
        self.d1 = None
        self.d2 = None
        self.d3 = None
    def nhap(self):
        self.ten, self.sbd, self.d1, self.d2, self.d3 = input().split()
        self.sbd = int(self.sbd)
        self.d1 = float(self.d1)
        self.d2 = float(self.d2)
        self.d3 = float(self.d3)
    def dtb(self):
        return self.d1 + self.d2 + self.d3
n = int(input())
ds = []
for i in range(n):
    sv = SinhVien()
    sv.nhap()
    ds.append(sv)
max = 0
vt = 0
s = 0
dem = 0
for i in range(n):
    s = ds[i].d1 + ds[i].d2 + ds[i].d3
    if s >= 15 and ds[i].d1 >=1 and ds[i].d2 >=1 and ds[i].d3 >= 1:
        if s > max:
            max = s
            vt = i
            dem = 1
if dem == 1:
    print("So thu tu cua thu khoa: %d"%vt)
    print("%d %s %.2f %.2f %.2f %.2f" % (ds[vt].sbd, ds[vt].ten, ds[vt].d1, ds[vt].d2, ds[vt].d3, ds[vt].dtb()))
else:
    print("Khong co thi sinh thi do")