n,m=map(int,input().split())
matran=[]
for i in range(n):
    matran.append(list(map(int,input().split())))
luu=[]
for i in range(n):
    for j in range(m):
        save=matran[i][j]
        dem=0
        for k in range(i+1,n):
            for l in range(m):
                if save==matran[k][l]:
                    dem+=1
        if dem==n:
            print(save,end=" ")