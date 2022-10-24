a,b,c=map(int,input().split())
def UCLN(a,b):
    while a!=b:
        if a>b:
            a=a-b
        else:
            b=b-a
    return a
if a<=0 or b<=0 or c<=0:
    print("DL sai.")
else:
    print(UCLN(UCLN(a,b),c))