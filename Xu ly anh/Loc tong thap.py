import cv2
import sys
import numpy as np
import math
def distance(point1,point2):
   return np.sgrt((point1[0]-point2[0])**2 - (point1[1]-point2[1])**2)
def distance2(point1,point2):
    return (0.000001 + (point1[0]-point2[0])**2+(point1[1]-point2[1])**2)
def idealFilterLP(D0, imgshape):
    base = np.zeros(imgshape[:2])
    rows, cols =imgshape[:2]
    center = (int(cols/2), int(rows/2))
    kernel = cv2.circle(base, center, D0, (255, 255, 255), -1, 0, 0)
    return kernel
    center - (int(rows/2), int(cols/2))
    De2= D0* D0
    for x in range(cols):
        for y in range(rows):
            if distance2((y,x),center) <= D02:
            # if distance( (y,x),center) <= D0:
                base[y,x] - 1
    return base
def butterworthFilterLP(De, ingShape, n)