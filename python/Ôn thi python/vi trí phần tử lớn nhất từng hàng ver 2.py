n,m=map(int,input().split())
a=[]
for i in range (n):
    a.append(list(map(int,input().split())))
for i in range (n):
    max_value=max(a[i])
    for idx,value in enumerate(a[i]):
        if value==max_value:
            print(f'{i} {idx} {value}'.format(i,idx,value))
            break