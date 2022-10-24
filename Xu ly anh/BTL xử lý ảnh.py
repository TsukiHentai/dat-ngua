import cv2
import sys
import numpy as np
vid=cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
if vid.isOpened()==False:
    print("Error when open video")
    sys.exit(1)
while vid.isOpened()==True:
    ret,frame=vid.read()
    if ret==True:
        anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        cv2.imshow("Input video",frame)
        histogram=cv2.equalizeHist(anhxam)
        cv2.imshow("Can bang Histogram",histogram)
        ret,tachnguong=cv2.threshold(anhxam,127,255,cv2.THRESH_BINARY)
        cv2.imshow("Tach nguong Thresholding",tachnguong)

        amban=np.invert(anhxam)
        cv2.imshow("Anh am ban Negative Image",amban)

        c = 255 / np.log(1 + np.max(amban))
        logaritthmic = c * (np.log(amban + 1))
        logaritthmic=np.array(logaritthmic, dtype = np.uint8)
        cv2.imshow("Logarithmic",logaritthmic)

        alpha = 1.5
        beta = 0
        constrast=cv2.convertScaleAbs(frame, alpha=alpha, beta=beta)
        cv2.imshow("Tang tuong phan Constrast enhancement",constrast)

        kernel=np.ones((5,5),np.float32)/25
        mean=cv2.filter2D(anhxam,-1,kernel)
        cv2.imshow("Loc trung binh Mean filter",mean)

        median=cv2.medianBlur(anhxam,3)
        cv2.imshow("Loc trung vi MedianBlur",median)

        gausian=cv2.GaussianBlur(anhxam,(3,3),0)
        cv2.imshow("Loc Gaussian",gausian)

        gauss = cv2.GaussianBlur(anhxam, (7, 7), 0)
        unsharp_image = cv2.addWeighted(anhxam, 2, gauss, -1, 0)
        cv2.imshow("Linear sharpenig",unsharp_image)

        kernel_x=np.array([[-1,0,1],
                            [-2,0,2],
                            [-1,0,1]])
        kernel_y = np.array([[-1, -2, -1],
                                 [0, 0, 0],
                                 [1, 2, 1]])
        fx=cv2.filter2D(anhxam,-1,kernel_x)
        fy=cv2.filter2D(anhxam,-1,kernel_y)
        cv2.imshow("Gradient image X",fx)
        cv2.imshow("Gradient image Y",fy)

        edge=cv2.Canny(anhxam,100,200)
        cv2.imshow("Egde detection",edge)
        if cv2.waitKey(10)==ord('q'):
            break
    else:
        break
vid.release()
cv2.destroyAllWindows()