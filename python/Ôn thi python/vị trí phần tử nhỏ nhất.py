n,m=map(int,input().split())
mt=[]
for i in range(n):
    mt.append(list(map(float,input().split())))
luux=0
luuy=0
min=mt[luux][luuy]
for i in range(n):
    for j in range(m):
        if mt[i][j]<min:
            min=mt[i][j]
            luux=i
            luuy=j
print("%d %d %.2f"%(luux,luuy,mt[luux][luuy]))