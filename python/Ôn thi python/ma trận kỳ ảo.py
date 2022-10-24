n=int(input())
mt1=[]
for i in range(n):
    mt1.append(list(map(int,input().split())))
m=int(input())
mt2=[]
for i in range(m):
    mt2.append(list(map(int,input().split())))
def check(n,mt):
    sum=0
    flag=0
    for i in range(n):
        for j in range(n):
            if i==j:
                sum+=mt[i][j]
    for i in range(n):
        sum1=0
        for j in range(n):
            sum1+=mt[i][j]
        if sum==sum1:
            flag=1
        else:
            flag=0
            break
    for i in range(n):
        sum2=0
        for j in range(n):
            sum2+=mt[j][i]
        if sum==sum2:
            flag=1
        else:
            flag=0
    if flag==1:
        print("MAGIC SQUARE")
    else:
        print("NOT MAGIC")
check(n,mt1)
check(m,mt2)