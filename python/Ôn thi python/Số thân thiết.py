a,b=map(int, input().split())
def uoc(n):
    sum=0
    for i in range(1,n):
        if n%i==0:
            sum=sum+i
    return sum
if uoc(a) == b and  uoc(b)==a:
    print("true",end="")
else:
    print("false",end="")