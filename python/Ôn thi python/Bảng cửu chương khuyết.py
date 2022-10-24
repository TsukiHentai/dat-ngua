a,b=map(int,input().split())
while a<1 or b>9:
    a,b=map(int, input().split())
for i in range(a,b+1):
    for j in range(1,9+1):
        if j>=i:
            print("%dx%d=%d"%(i,j,(i*j)))