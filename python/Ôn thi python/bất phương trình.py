a,b=map(int, input().split())
if a==0:
    if b>0:
        print("VSN")
    if b<=0:
        print("VN")
else:
    if a>0:
        c=float(-b/a)
        print("x>%.2f"%c)
    else:
        c=float(-b/a)
        print("x<%.2f"%c)