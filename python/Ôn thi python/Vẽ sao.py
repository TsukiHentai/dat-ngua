n=int(input())
while n<1:
    n=int(input())
m=n-1
b=1
for i in range(1, n+1):
    print(" " * m,end="")
    print("* " * b)
    m = m - 1
    b = b + 1