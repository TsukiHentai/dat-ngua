a=list(map(int,input().split()))
b=int(input())
dem=0
luu=0
for i in (a):
    if i%b==0:
        dem+=1
        luu=i
print(luu)
