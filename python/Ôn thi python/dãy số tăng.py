n=int(input())
a=list(map(float,input().split()))
m=int(input())
b=list(map(float,input().split()))
def check(n,a):
    luu=a[0]
    for i in range(1,n):
        if luu>a[i]:
            print("KHONG_TANG")
            return
        luu=a[i]
    print("TANG")
check(n,a)
check(m,b)