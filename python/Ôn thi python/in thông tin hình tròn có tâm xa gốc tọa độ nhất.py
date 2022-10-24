import operator

n=int(input())
ds=[]
for i in range(n):
    ds.append(list(map(float,input().split())))
luu=max(ds,key=operator.itemgetter(3))
print("%d %d %d %.3f"%(luu[0],luu[1],luu[2],luu[3]))