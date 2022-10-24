n=int(input())
mt1=[]
for i in range(n):
    mt1.append(list(map(int,input().split())))
m=int(input())
mt2=[]
for i in range(m):
    mt2.append(list(map(int,input().split())))
dem=0
for i in range(n):
    for j in range(n):
        if i!=j:
            if mt1[i][j]!=mt1[j][i]:
                dem=1
if dem==0:
    print("Ma tran 1: Co doi xung")
else:
    print("Ma tran 1: Khong doi xung")
dem1=0
for i in range(m):
    for j in range(m):
        if i!=j:
            if mt2[i][j]!=mt2[j][i]:
                dem1=1
if dem1==0:
    print("Ma tran 2: Co doi xung")
else:
    print("Ma tran 2: Khong doi xung")