import cv2
import glob
for image in glob.glob(r"D:\Hoc\xu ly anh\image for python\*.jpg"):
    x=cv2.imread(image)
    y=cv2.GaussianBlur(x,(3,3),0)
    cv2.imshow("Image",y)
    cv2.waitKey(0)
    cv2.destroyAllWindows()