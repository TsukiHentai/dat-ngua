import math

a,b,c=map(float,input().split())
d=b*b-4*a*c
if a==0:
    if b==0:
        if c==0:
            print("VSN")
        else:
            print("VN")
    else:
        print("%.3f"%(-c/b))
else:
    if d==0:
        print("%.3f"%(-b/(2*a)))
    else:
        if d<0:
            print("VN")
        else:
            x1=(-b-math.sqrt(d))/(2*a)
            x2=(-b+math.sqrt(d))/(2*a)
            if x1<x2:
                print("%.3f %.3f"%(x1,x2))
            else:
                print("%.3f %.3f" % (x2, x1))