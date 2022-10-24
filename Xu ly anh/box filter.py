import cv2
import matplotlib.pyplot as plt
import numpy as np
import glob
from matplotlib import *
for image in glob.glob(r"D:\Hoc\xu ly anh\image for python\*.jpg"):
    x=cv2.imread(image)
    blur=cv2.blur(x,(3,3))
    plt.subplot(121), plt.imshow(x), plt.title('Original')
    plt.xticks([]), plt.yticks([])
    plt.subplot(122), plt.imshow(blur), plt.title('Blurred')
    plt.xticks([]), plt.yticks([])
    plt.show()
    cv2.waitKey(0)
cv2.destroyAllWindows()