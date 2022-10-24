n=int(input())
mt=[]
for i in range(n):
    mt.append(list(map(float,input().split())))
def chuyenvi(a,b):
    for i in range(b):
        for j in range(i):
            if i!=j:
                temp=a[i][j]
                a[i][j]=a[j][i]
                a[j][i]=temp
chuyenvi(mt,n)
print(n)
for i in range(n):
    for j in range(n):
        print("%.2f"%mt[i][j],end=" ")
    print()