s=[i for i in input()]
result=[]
length=0
for i in range(len(s)):
    for j in range(1,len(s)):
        x=s[i:i+j]
        if x ==x[::-1]:
            result.append(x)
            if len(x)>length:
                length=len(x)
for i in result:
    if len(i)==length:
        print(''.join(i))
        break