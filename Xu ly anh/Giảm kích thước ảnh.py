import cv2
import sys
import glob
imagefolder=sys.argv[1]
scalepersent=0.5
for imagepath in glob.glob(imagefolder+"/*.jpg"):
    inputimage=cv2.imread(imagepath)
    width=int(inputimage.shape[1]*scalepersent)
    height=int(inputimage.shape[0]*scalepersent)
    dim=(width,height)
    #resize
    resized=cv2.resize(inputimage,dim,interpolation=cv2.INTER_AREA)
    cv2.imshow("Input image",inputimage)
    cv2.imshow("Resized image",resized)
    if cv2.waitKey(0)==ord("q"):
        break
cv2.destroyAllWindows()