n=int(input())
a=list(map(int,input().split()))
tbc=sum(a)/len(a)
dem=0
for i in range(n):
    if a[i]>=tbc:
        print("%d"%(a[i]),end=" ")
        dem+=1
print("\nSo phan tu thoa man: %d"%dem)