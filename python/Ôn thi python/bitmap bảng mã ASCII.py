n,m=map(int,input().split())
mt=[]
for i in range(n):
    mt.append(list(map(int,input().split())))
for i in range(n):
    for j in range(m):
        if mt[i][j]==0:
            print(" ",end=" ")
        if mt[i][j]==1:
            print("*",end=" ")
    print()