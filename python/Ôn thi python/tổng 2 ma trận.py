n1,m1=map(int,input().split())
mt1=[]
for i in range(n1):
    mt1.append(list(map(int,input().split())))
n2,m2=map(int,input().split())
mt2=[]
for i in range(n2):
    mt2.append(list(map(int,input().split())))
if m1==m2 and n1==n2:
    print("Ma tran tong")
    for i in range(n1):
        for j in range(m1):
            mt1[i][j]=mt1[i][j]+mt2[i][j]
    for i in range(n1):
        for j in range(m1):
            print("%d"%mt1[i][j],end=" ")
        print()
else:
    print("Du lieu vao sai")