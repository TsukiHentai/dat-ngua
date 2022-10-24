import math
class HinhTron:
    def init(self):
        self.ma = None
        self.x = None
        self.y = None
        self.bk = None
    def nhap(self):
        self.ma, self.x, self.y, self.bk = input().split()
        self.x = int(self.x)
        self.y = int(self.y)
        self.bk = float(self.bk)

n = int(input())
ds = []

for i in range(n):
    ht = HinhTron()
    ht.nhap()
    ds.append(ht)

Xa,Ya,Xb,Yb = map(int,input().split())

for i in range(n):
    kc1 = math.sqrt((Xa-ds[i].x)*(Xa-ds[i].x) + (Ya-ds[i].y)*(Ya-ds[i].y))
    kc2 = math.sqrt((Xb-ds[i].x)*(Xb-ds[i].x) + (Yb-ds[i].y)*(Yb-ds[i].y))

    if kc1 == ds[i].bk:
        print("Diem (%d, %d) nam tren hinh tron tam (%d, %d) ban kinh %.3f"%(Xa,Ya,ds[i].x,ds[i].y,ds[i].bk))
    elif kc1 > ds[i].bk:
        print("Diem (%d, %d) nam ngoai hinh tron tam (%d, %d) ban kinh %.3f" % (Xa, Ya, ds[i].x, ds[i].y, ds[i].bk))
    else:
        print("Diem (%d, %d) nam trong hinh tron tam (%d, %d) ban kinh %.3f" % (Xa, Ya, ds[i].x, ds[i].y, ds[i].bk))

    if kc2 == ds[i].bk:
        print("Diem (%d, %d) nam tren hinh tron tam (%d, %d) ban kinh %.3f" % (Xb, Yb, ds[i].x, ds[i].y, ds[i].bk))
    elif kc2 > ds[i].bk:
        print("Diem (%d, %d) nam ngoai hinh tron tam (%d, %d) ban kinh %.3f" % (Xb, Yb, ds[i].x, ds[i].y, ds[i].bk))
    else:
        print("Diem (%d, %d) nam trong hinh tron tam (%d, %d) ban kinh %.3f" % (Xb, Yb, ds[i].x, ds[i].y, ds[i].bk))
