n=int(input())
a=list(map(float,input().split()))
m=int(input())
b=list(map(float,input().split()))
def check(n,a):
    luu=0
    dem=0
    for i in range(n):
        if a[i]>0:
            luu=i
            dem+=1
            break
    if dem==0:
        print("Khong co so duong trong mang.")
    else:
        print("%d %.3f"%(luu,a[luu]))
check(n,a)
check(m,b)
