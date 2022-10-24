import cv2
import numpy as np
x=cv2.imread(r"D:\Hoc\xu ly anh\image for python\1542213891179.jpg",0)
equ=cv2.equalizeHist(x)
res = np.hstack((x, equ))
cv2.imshow("Image",res)
cv2.waitKey(0)
cv2.destroyAllWindows()