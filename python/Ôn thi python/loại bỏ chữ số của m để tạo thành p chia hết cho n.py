m, n = input().split()
m = [i for i in m]
n = int(n)
while n<=1:
    m, n = input().split()
    m = [i for i in m]
    n = int(n)
result = []
for i in range(len(m)):
    x = []
    for j in m:
        if j == m[i]:
            continue
        x.append(j)
    x = int(''.join(x))
    if x % n == 0:
        result.append(x)
if len(result):
    print(min(result))
else:
    print('impossible')