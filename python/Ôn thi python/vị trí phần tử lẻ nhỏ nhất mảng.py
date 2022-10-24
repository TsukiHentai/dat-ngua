n=int(input())
a=list(map(int,input().split()))
vitri=-1
min=0
for i in range(n):
    if a[i]%2!=0:
        min=a[i]
        vitri=i
for i in range(n):
    if a[i]%2!=0:
        if min>a[i]:
            min=a[i]
            vitri=i
if vitri==-1:
    print("Khong co so le trong mang")
else:
    print("So le nho nhat co vi tri %d gia tri %d"%(vitri,a[vitri]))