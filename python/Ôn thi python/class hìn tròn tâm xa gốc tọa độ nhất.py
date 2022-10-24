n=int(input())
while n<1 or n>1000:
    n = int(input())
ds=[]
for i in range(n):
    ds.append(list(map(float,input().split())))
max=0
vitri=0
for i in range(0,len(ds)):
    if ds[i][3]>max:
        max=ds[i][3]
        vitri=i
print("%d %d %d %.3f"%(ds[vitri][0],ds[vitri][1],ds[vitri][2],max))