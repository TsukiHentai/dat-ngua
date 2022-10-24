name = input()
def cht(name):
    temp1 = name.split()
    temp2 = []
    for j in temp1:
        ten = ''
        for i in j:
            if i.isalpha():
                ten = ten + i
        ten = ten.lower()
        ten = ten.capitalize()
        if ten.isalpha():
            temp2.append(ten)
    tout=' '.join(temp2)
    return tout
tout=cht(name)
print(tout)