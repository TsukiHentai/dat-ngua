import math
n=int(input())
ds=[]
def tinh(a,b,c,d):
    dodai=math.sqrt((a-c)*(a-c)+(b-d)*(b-d))
    return dodai
for i in range(n):
    ds.append(list(map(float,input().split())))
xa,ya,xb,yb=map(int,input().split())
for i in range(0,len(ds)):
    if tinh(xa,ya,ds[i][1],ds[i][2])==ds[i][3]:
        print("Diem (%d, %d) nam tren hinh tron tam (%d, %d) ban kinh %.3f"%(xa,ya,ds[i][1],ds[i][2],ds[i][3]))
    else:
        if tinh(xa,ya,ds[i][1],ds[i][2])>ds[i][3]:
            print("Diem (%d, %d) nam ngoai hinh tron tam (%d, %d) ban kinh %.3f"%(xa,ya,ds[i][1],ds[i][2],ds[i][3]))
        else:
            if tinh(xa,ya,ds[i][1],ds[i][2])<ds[i][3]:
                print("Diem (%d, %d) nam trong hinh tron tam (%d, %d) ban kinh %.3f"%(xa,ya,ds[i][1],ds[i][2],ds[i][3]))
    if tinh(xb,yb,ds[i][1],ds[i][2])==ds[i][3]:
        print("Diem (%d, %d) nam tren hinh tron tam (%d, %d) ban kinh %.3f"%(xb,yb,ds[i][1],ds[i][2],ds[i][3]))
    else:
        if tinh(xb,yb,ds[i][1],ds[i][2])>ds[i][3]:
            print("Diem (%d, %d) nam ngoai hinh tron tam (%d, %d) ban kinh %.3f"%(xb,yb,ds[i][1],ds[i][2],ds[i][3]))
        else:
            if tinh(xb,yb,ds[i][1],ds[i][2])<ds[i][3]:
                print("Diem (%d, %d) nam trong hinh tron tam (%d, %d) ban kinh %.3f"%(xb,yb,ds[i][1],ds[i][2],ds[i][3]))