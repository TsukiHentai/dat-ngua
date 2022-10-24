n=int(input())
ds=[]
for i in range(n):
    ds.append(list(map(float,input().split())))
max=0
vitri=0
for i in range(n):
    if ds[i][0]*ds[i][1]*ds[i][2]>max:
        max=ds[i][0]*ds[i][1]*ds[i][2]
        vitri=i
print("%.1f %.1f %.1f %.1f"%(ds[vitri][0],ds[vitri][1],ds[vitri][0],max))