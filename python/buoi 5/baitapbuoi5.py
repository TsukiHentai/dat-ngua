import random
from random import  randrange
n=int(input("Nhap vao so phan tu: "))
list1=[0]*n
for i in range(n):
   list1[i]=randrange(0,100)
print(list1)
list1.append(int(input("Nhap vao phan tu can them")))
m=int(input("Nhap so can kiem tra"))
z=0
for i in list1:
   if m== list1[i]:
      print("Tim thay")
      z=z+1
print("Tim thay {} so can tim".format(list1.count(m)))