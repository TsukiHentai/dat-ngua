a,b=map(int,input().split())
while a<1 or b>100:
    a, b = map(int, input().split())
matran=[]
for i in range(a):
    matran.append(list(map(int,input().split())))
for i in range(a):
    vitrix=0
    vitriy=0
    max=0
    dem=0
    while dem<b:
        if (matran[i])[dem]>max:
            max=(matran[i])[dem]
            vitrix=i
            vitriy=dem
        dem+=1
    print("%d %d %d"%(vitrix,vitriy,max))
