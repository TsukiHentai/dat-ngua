import math

n=int(input())
def snt(a):
    check=0
    for i in range(2,a):
        if a%i==0:
            check=1
    if check==0:
        return 0
    else:
        return 1
flag=0
flag1=0
for i in range(2,n):
    if snt(i)==0:
        if n%i==0:
            flag=1
for i in range(2,n):
    if snt(i)==0:
        if n%(math.pow(i,2))==0:
            flag1=1
if flag==1 and flag1==1:
    print("true")
else:
    print("false")