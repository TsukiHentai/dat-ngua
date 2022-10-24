import numpy
import cv2
import os
import sys
import timeit
from glob import glob

import numpy as np

img_mask = r"D:\Hoc\xu ly anh\image for python\*"
img_name = glob(img_mask)
thresh = 127
for img_path in img_name:
    print(img_path)
    img = cv2.imread(img_path)
    gray_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    bw_img = cv2.threshold(gray_img, thresh, 255, cv2.THRESH_BINARY)[1]
    cv2.imshow("input image", img)
    cv2.imshow("grayscale", gray_img)
    cv2.imshow("blackwhite image", bw_img)
    median = cv2.medianBlur(img, 5)
    cv2.imshow("Median Blur", median)
    blur = cv2.GaussianBlur(img, (5, 5), 0)
    cv2.imshow("Gaussian Blur", blur)
    start=timeit.default_timer()
    bilateral=cv2.bilateralFilter(img,5,75,75)
    stop=timeit.default_timer()
    print("Bilateral filter time:",stop-start)
    cv2.imshow("Bilateral Blur", bilateral)
    kernelX=np.array([[-1,-1,-1],[0,0,0],[1,1,1]])
    kernelY=np.array([[-1,0,1],[-1,0,1],[-1,0,1]])
    prewittX = cv2.filter2D(img,-1,kernelX)
    prewittY = cv2.filter2D(img, -1, kernelY)
    cv2.imshow("PrewittX",prewittX)
    cv2.imshow("PrewittY",prewittY)
    dft=cv2.dft(np.float32(img),flags = cv2.DFT_COMPLEX_OUTPUT)
    dft_shift = np.fft.fftshift(dft)
    cv2.imshow("DFT",dft)
    if cv2.waitKey(0) == 27:
        break
cv2.destroyAllWindows()