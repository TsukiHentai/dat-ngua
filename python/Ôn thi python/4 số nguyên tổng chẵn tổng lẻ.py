a,b=map(int,input().split())
x,y=map(int,input().split())
if a>b:
    temp=a
    a=b
    b=temp
if x>y:
    temp=x
    x=y
    y=temp
dem1=0
sum1=0
dem2=0
sum2=0
for i in range(a,b+1):
    if i%2==0:
        dem1+=1
        sum1+=i
for i in range(x,y+1):
    if i%2!=0:
        dem2+=1
        sum2+=i
if dem1==0:
    print("NO")
else:
    print("%.2f"%(sum1/dem1))
if dem2==0:
    print("NO")
else:
    print("%.2f"%(sum2/dem2))