a=input()
n=int(input())
b=input()
m=int(input())
luu1=[]
for i in range(0,len(a)):
    if i!=n:
        luu1.append(a[i])
luu2=[]
for i in range(0,len(b)):
    if i!=m:
        luu2.append(b[i])
for i in range(0,len(luu1)):
    print("%s"%(luu1[i]),end="")
print()
for i in range(0,len(luu2)):
    print("%s"%(luu2[i]),end="")