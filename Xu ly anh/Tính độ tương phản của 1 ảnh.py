import cv2
x=cv2.imread(r"D:\Hoc\xu ly anh\image for python\1542213891179.jpg")
cv2.imshow("Image",x)
x=cv2.cvtColor(x,cv2.COLOR_BGR2GRAY)
constrast=x.std()
cv2.imshow("Image",x)
print(constrast)
cv2.waitKey(0)
cv2.destroyAllWindows()