a,b=map(int,input().split())
if a>b:
    temp=a
    a=b
    b=temp
sum=0
for i in range(a,b+1):
    if i%2==0:
        sum+=i
print(sum)