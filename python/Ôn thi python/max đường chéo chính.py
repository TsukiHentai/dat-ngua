n=int(input())
a=[]
for i in range(n):
    a.append(list(map(int,input().split())))
b=[]
for i in range(n):
    for j in range(n):
        if i==j:
            b.append(a[i][j])
print(max(b))