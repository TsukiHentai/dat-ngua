n=int(input())
m=2016
for i in range(n):
    m=m+4
    if (m%4==0 and m%100!=0) or m%400==0:
        print(m,end=" ")
    else:
        m=m+4
        print(m, end=" ")