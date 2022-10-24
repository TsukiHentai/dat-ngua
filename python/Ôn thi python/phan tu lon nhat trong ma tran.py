a,b=map(int,input().split())
while a<1 or b>100:
    a, b = map(int, input().split())
matran=[]
for i in range(a):
    matran.append(list(map(int,input().split())))
vitrix = 0
vitriy = 0
max = 0
for i in range(a):
    for j in range(b):
        if matran[i][j]>max:
            max=matran[i][j]
print("%d %d %d"%(vitrix,vitriy,max))
