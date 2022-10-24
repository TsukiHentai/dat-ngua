
a=list(map(int,input().split()))
S=0
while a[0]<0:
    a = list(map(int, input().split()))
if len(a)-1!=a[0]:
    a = list(map(int, input().split()))
for i in range(1,a[0]+1):
    S+=a[i]
print(S)