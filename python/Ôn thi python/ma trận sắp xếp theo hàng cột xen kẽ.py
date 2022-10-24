a,b=map(int, input().split())
mt=[]
for i in range (a):
    mt.append(list(map(int,input().split())))
x=int(input())
for i in range(a):
    mt[i].sort()
if x==0:
    for i in range(a):
        if i%2==0:
            mt[i].reverse()
    for i in range(a):
        for j in range(b):
            print(mt[i][j], end=" ")
        print()
if x==1:
    for i in range(a):
        if i%2!=0:
            mt[i].reverse()
    for i in range(a):
        for j in range(b):
            print(mt[i][j], end=" ")
        print()
