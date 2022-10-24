
def zero():
    return 'zero'
def one():
    return 'one'
def indirect(i):
    switcher = {
        0: zero,
        1: one,
        2: lambda: 'two'
    }
    func = switcher.get(i, lambda:"Invalid")
    return func()
i=int
while i!=9:
    i=int(input("Nhap i"))
    if i==9:
        print("Chuong trinh thoat")
    else:
        print(indirect(i))
print("out")
