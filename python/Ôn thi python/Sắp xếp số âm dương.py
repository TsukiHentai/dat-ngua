a=map(int,input().split())
b=[]
c=[]
for i in a:
    if int(i)<0:
        b.append(i)
    if int(i)>=0:
        c.append(i)
b.sort()
b.reverse()
c.sort()
a=b+c
for i in a:
    print(i, end=" ")