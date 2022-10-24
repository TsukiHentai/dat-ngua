a,b=map(int,input().split())
def check(n):
    dem=0
    for i in range(2,n):
        if n%i==0:
            dem+=1
    if dem==0:
        return 1
    else:
        return 0
luu=0
if a>b:
    luu=1
    temp =a
    a=b
    b=temp
c=[]

for i in range(a,b+1):
    if i>=2:
        if check(i)==1:
            c.append(i)
if len(c)==0:
    print("Khong co")
else:
    if luu==0:
        for i in c:
            print("%d"%(i),end=" ")
    else:
        c.reverse()
        for i in c:
            print("%d"%(i),end=" ")
