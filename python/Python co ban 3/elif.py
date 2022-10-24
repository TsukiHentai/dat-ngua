a = int(input())

if a % 2 == 0:
    print("So chan")
else:
    print("So le")


b = int(input())

if a > 0:
    print("So Duong")
elif a<0:
    print("So Am")
else:
    print("So 0")

c = int(input())
d = int(input())
if c == 0 and d == 0:
    print("PT vo so nghiem")
elif c == 0 and d !=0:
    print("PT vo nghiem")
else:
    print("Ket qua pt: ", -d/c)
