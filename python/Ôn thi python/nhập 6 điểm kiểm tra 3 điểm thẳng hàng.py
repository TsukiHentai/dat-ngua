import math

x1 ,y1=map(float,input().split())
x2 ,y2=map(float,input().split())
x3 ,y3=map(float,input().split())
x4 ,y4=map(float,input().split())
x5 ,y5=map(float,input().split())
x6 ,y6=map(float,input().split())

def check(x1 ,y1 ,x2 ,y2 ,x3 ,y3):
    a=math.sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
    b=math.sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))
    c=math.sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))
    if(a+b==c or a+c==b or b+c==a):
        print("YES",end=" ")
    else:
        print("NO",end=" ")
check(x1 ,y1 ,x2 ,y2 ,x3 ,y3)
check(x4, y4 ,x5, y5 ,x6, y6)
# 219 892 -664 244 -781 194 585 298 585 298 285 298
