def snt(n):
    count = 0
    for i in range(1, n+1):
        if n % i == 0:
            count = count + 1
    if count == 2:
        return True
    return  False

a,b=map(int,input().split())
d = 0
e = []
dem = 0
if a<=b:
    for i in range(a,b+1):
        if(snt(i)==True):
            e.append(i)
            d = True
            dem = 1
else:
    for i in range(b,a+1):
        if(snt(i)==True):
            e.append(i)
            d = True
if d == False:
    print("Khong co")
else:
    if dem == 1:
        for i in (e):
            print("%d" % (i), end=" ")
    else:
        e.reverse()
        for i in (e):
            print("%d"%(i),end=" ")
