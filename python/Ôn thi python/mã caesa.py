a = [i for i in input()]
k = int(input())
s = [i for i in input()]

mode = int(input())

if mode:
    for i in range(len(s)):
        x = a.index(s[i]) - k
        while x < 0:
            x += len(a)
        print(a[x], end='')
else:
    for i in range(len(s)):
        x = a.index(s[i]) + k
        while x >= len(a):
            x -= len(a)
        print(a[x], end='')