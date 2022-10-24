a1,b1,c1=map(float,input().split())
a2,b2,c2=map(float,input().split())
d=a1*b2-a2*b1;
dx=b2*c1-b1*c2;
dy=a1*c2-a2*c1;
if d==0:
    if dx==0 and dy==0:
        print("VSN")
    else:
        print("VN")
else:
    print("%.5f %.5f"%(dx/d,dy/d))