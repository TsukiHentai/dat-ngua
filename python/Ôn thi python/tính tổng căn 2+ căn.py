import math

n=int(input())
if n<0:
    print("Error.")
else:
    s=0
    for i in range(n):
        s=math.sqrt(2+s)
    print("%.2f"%(s))