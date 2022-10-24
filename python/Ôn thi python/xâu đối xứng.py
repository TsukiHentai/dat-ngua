a=input()
b=[]
c=[]
for i in a:
    if i !=" " and i.isalnum()==True:
        b.append(i.lower())
        c.append(i.lower())
c.reverse()
if b==c:
    print("true")
else:
    print("false")