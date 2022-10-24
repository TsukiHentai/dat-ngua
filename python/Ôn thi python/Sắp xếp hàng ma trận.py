n,m=map(int,input().split())
mt=[]
for i in range(n):
    mt.append(list(map(int,input().split())))
for i in range(n):
    mt[i].sort()
print("%d %d"%(n,m))
for i in range(n):
    for j in range(m):
        print("%d"%(mt[i][j]),end=" ")
    print()