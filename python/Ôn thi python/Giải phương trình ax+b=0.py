a,b=map(float,input().split())
if a==0:
    if b==0:
        print("VSN")
    else:
        print("VN")
else:
    print("%.2f"%(-b/a))