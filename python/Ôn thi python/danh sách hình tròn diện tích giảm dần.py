import operator
n=int(input())
while n<1 or n>1000:
    n = int(input())
ds=[]
for i in range(n):
    ds.append(list(map(float,input().split())))
ds.sort(key=operator.itemgetter(3),reverse=True)
print("Danh sach hinh tron da sap xep: %d"%n)
for i in range(n):
    print("%d %d %d %.3f"%(ds[i][0],ds[i][1],ds[i][2],ds[i][3]))