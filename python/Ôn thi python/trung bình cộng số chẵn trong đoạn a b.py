a,b=map(int,input().split())
if a>b:
    temp=a
    a=b
    b=temp
dem=0
sum=0
for i in range(a,b+1):
    if i%2==0:
        dem+=1
        sum+=i
print("%.2f"%(sum/dem))