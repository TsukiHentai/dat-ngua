a,b=map(int,input().split())
if b<a:
    temp=a
    a=b
    b=temp
dem=0
tong=0
for i in range(a,b+1):
    if i%2!=0:
        dem+=1
        tong+=i
print("%d %d"%(dem,tong))