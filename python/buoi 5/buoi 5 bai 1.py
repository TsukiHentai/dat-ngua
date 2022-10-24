_list = [1,2,3,5,8,13,0,-1]
for i in _list:
    print(i)

print("-"*20)
print(_list)
list1 = [10,20,30,40]
print(list1)
list1[2]=25
print(list1)
print("-"*30)
list1=[10,20,30,40]
list2=list1
print(list1)
list2[2]=25
print(list1)
print("-"*30)
list1=[10,20,30,40]
print(list1)
list1.insert(2,25)
print(list1)
print("-"*30)
list1=[10,20,30,40]
print(list1)
list1.append(50)
print(list1)
print("-"*30)
list1=[10,20,30,40,30]
print(list1)
list1.remove(30)
print(list1)
del (list1[0])
print(list1)
print("-"*30)
list1=[10,20,30,40]
print(list1)
list1.reverse()
print(list1)
print("-"*30)
list1=[10,20,30,40,30]
print(list1)
list1.sort()
print(list1)
print("-"*30)
list1=[10,20,30,40,30]
print(list1[1:3])
print("-"*20)

list1 = [[10, 20, 30],
         [10, 20, 30],
         [10, 20, 30]
         ]
for r in list1:
    for l in r:
      print('{:>3}'.format(l),end = '')
    print()
