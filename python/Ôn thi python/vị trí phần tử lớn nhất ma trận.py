n,m=map(int,input().split())
mt=[]
for i in range(n):
    mt.append(list(map(float,input().split())))
luux=0
luuy=0
max=0
for i in range(n):
    for j in range(m):
        if mt[i][j]>max:
            max=mt[i][j]
            luux=i
            luuy=j
print("Phan tu lon nhat co chi so hang %d, chi so cot %d, gia tri %.2f"%(luux,luuy,mt[luux][luuy]))