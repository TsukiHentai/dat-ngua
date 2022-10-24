class chunhat():
    def __init__(self):
        dai=0
        rong=0
        cao=0
    def nhap(self):
        self.dai, self.rong, self.cao=map(float,input().split())
    def thetich(self):
        return float(self.dai*self.rong*self.cao)
    def xuat(self):
        print("%.1f %.1f %.1f"%(self.dai,self.rong,self.cao))
n=int(input())
a=[]
for i in range(n):
    cn=chunhat()
    cn.nhap()
    a.append(cn)
maxValue = -1
maxthetich = ''
for i in a:
    if i.thetich() > maxValue:
        maxValue = i.thetich()
        maxthetich = i
print('%.1f %.1f %.1f %.1f' % (maxthetich.dai, maxthetich.rong, maxthetich.cao, maxValue))