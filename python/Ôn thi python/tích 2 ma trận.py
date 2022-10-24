n1,m1=map(int,input().split())
mt1=[]
for i in range(n1):
    mt1.append(list(map(int,input().split())))
n2,m2=map(int,input().split())
mt2=[]
for i in range(n2):
    mt2.append(list(map(int,input().split())))
if m1!=n2:
    print("Du lieu vao sai")
else:
    print("Ma tran tich")
    luu=[[0]*m1 for i in range(n1)]
    for i in range(0,n1):
        for j in range(0,m1):
            luu[i][j]=mt1[i][j]-mt1[i][j]
    for i in range(0,n1):
        for j in range(0,m1):
            for k in range(0,m1):
                luu[i][j] +=mt1[i][k]*mt2[k][j]
    for i in range(0,n1):
        for j in range(0,m2):
            print("%d"%(luu[i][j]),end=" ")
        print()