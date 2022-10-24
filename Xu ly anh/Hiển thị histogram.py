import cv2
import matplotlib.pyplot as plt
import numpy
import glob
from matplotlib import *
for image in glob.glob(r"D:\Hoc\xu ly anh\image for python\*.jpg"):
    x=cv2.imread(image)
    cv2.imshow("Image",x)
    plt.hist(x.ravel(),256,[0,256])
    plt.show()
    cv2.waitKey(0)
cv2.destroyAllWindows()