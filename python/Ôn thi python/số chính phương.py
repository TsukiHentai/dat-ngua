n=int(input())

check=0
for i in range(0,n+1):
    if i*i==n:
        check=1
if check==1:
    print("true")
else:
    print("false")