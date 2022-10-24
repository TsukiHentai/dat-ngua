import math

n=int(input())
while n<math.pow(10,-100) and n>math.pow(10,100):
    n = int(input())
if n%3==0:
    print("true")
else:
    print("false")