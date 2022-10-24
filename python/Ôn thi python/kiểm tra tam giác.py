import math
a,b,c=map(float,input().split())
if a<=0 or b<=0 or c<=0 or a+b<=c or a+c<=b or b+c<=a:
    print("DL Sai")
else:
    X=a+b+c
    p=X/2
    Y= math.sqrt((p*(p-a)*(p-b)*(p-c)))
    print("Dien tich tam giac: %.2f"%Y)
    print("Chu vi tam giac: %.2f"%X)