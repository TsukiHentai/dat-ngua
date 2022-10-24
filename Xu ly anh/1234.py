
import tkinter.messagebox
from tkinter import *
from tkinter import filedialog
import numpy as np
import cv2


def openfile():
    global filepath
    filepath=filedialog.askopenfilename()
    cap=cv2.VideoCapture(filepath)
    if filepath==None or filepath=="":
        tkinter.messagebox.showerror("Error","Bạn chưa chọn đường dẫn")
    else:
        cap = cv2.VideoCapture(filepath)
    cap.release()
    cv2.destroyAllWindows()
def show():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
                # sys.exit(1)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    cv2.destroyAllWindows()
def Histofram():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Histogram" + '.mp4'
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M','P','V','4'), 60.0, (int(vid.get(3)), int(vid.get(4))),isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()

        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            histogram = cv2.equalizeHist(anhxam)
            out.write(histogram)
            cv2.imshow("Can bang Histogram", histogram)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    out.release()
    vid.release()

    cv2.destroyAllWindows()

def tachnguong():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Tach nguong mean" + '.mp4'
    ten1= "Tach nguong gaussian" + '.mp4'
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'),
                          60.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    out1 = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten1, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'),
                          60.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            ret, tachnguong = cv2.threshold(anhxam, 127, 255, cv2.THRESH_BINARY)
            tachnguong1 = cv2.adaptiveThreshold(anhxam, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, 11, 2)
            tachnguong2 = cv2.adaptiveThreshold(anhxam, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 11, 2)
            out.write(tachnguong1)
            out1.write(tachnguong2)
            cv2.imshow("Tach nguong", tachnguong)
            cv2.imshow("Tach nguong linh hoat trung binh", tachnguong1)
            cv2.imshow("Tach nguong linh hoat Gaussian", tachnguong2)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    out1.release()
    cv2.destroyAllWindows()

def Amban():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Video am ban" + ".mp4"
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'),
                          59.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()

        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            amban=255-anhxam
            out.write(amban)
            cv2.imshow("Video xam", anhxam)
            cv2.imshow("Video am ban", amban)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    cv2.destroyAllWindows()


def Loga():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Logarith" + ".mp4"
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'),
                          59.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            c = 255 / np.log(1 + np.max(anhxam))
            logaritthmic = c * (np.log(anhxam + 1))
            logaritthmic = np.array(logaritthmic, dtype=np.uint8)
            out.write(logaritthmic)
            cv2.imshow('Video bien doi logarith', logaritthmic)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    cv2.destroyAllWindows()

def contrast():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Contrast" + ".mp4"
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'), 59.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            max = np.max(anhxam)
            min = np.min(anhxam)
            contrast = 255 * (anhxam - min) / (max - min)
            # out.write(np.int8(contrast))
            cv2.imshow("Tang tuong phan", contrast)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    cv2.destroyAllWindows()

def Meanfilter():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Mean filter" + ".mp4"
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'),
                          59.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            mean = cv2.blur(anhxam, (5, 5))
            out.write(mean)
            cv2.imshow("Mean filter", mean)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    cv2.destroyAllWindows()

def Medianfilter():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Median filter" + ".mp4"
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'),
                          59.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            # saltpepper = skimage.util.random_noise(anhxam, mode="s&p", seed=None, clip=True)
            # cv2.imshow("Salt and pepper noise", saltpepper)
            # salt = cv2.normalize(saltpepper, saltpepper, 0, 255, cv2.NORM_MINMAX)
            # median = cv2.medianBlur(np.uint8(salt), 5)
            median=cv2.medianBlur(anhxam,5)
            out.write(median)
            cv2.imshow("Median filter", median)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    cv2.destroyAllWindows()

def GaussianFilter():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Gaussian filter" + ".mp4"
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'),
                          59.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            gaussian = cv2.GaussianBlur(anhxam, (5, 5), 0)
            out.write(gaussian)
            cv2.imshow("Gaussian filter", gaussian)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    cv2.destroyAllWindows()

def LinerSharpen():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Liner sharpen" + ".mp4"
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'),
                          59.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            gaussian = cv2.GaussianBlur(anhxam, (5, 5), 0)
            sharp = 1.5 * anhxam - 0.5 * gaussian
            last = cv2.normalize(sharp, 0, 255, cv2.NORM_MINMAX)
            last3=((last+1)*255/2).astype('uint8')
            out.write(last3)
            cv2.imshow("Linear sharpening filter", last)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    cv2.destroyAllWindows()

def Gradien():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    while vid.isOpened() == True:
        ret, frame = vid.read()

        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            kernel_x = np.array([[-1, 0, 1],
                                 [-2, 0, 2],
                                 [-1, 0, 1]])
            kernel_y = np.array([[-1, -2, -1],
                                 [0, 0, 0],
                                 [1, 2, 1]])
            fx = cv2.filter2D(anhxam, -1, kernel_x)
            fy = cv2.filter2D(anhxam, -1, kernel_y)
            kethopXY = cv2.bitwise_or(fx, fy)
            cv2.imshow("Gradient image X", fx)
            cv2.imshow("Gradient image Y", fy)
            cv2.imshow("Ket hop SobelX and Y", kethopXY)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    cv2.destroyAllWindows()

def EdgeDetection():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Edge detection SobelXY" + '.mp4'
    ten1 = "Edge detection Canny" + '.mp4'
    ten2 = "Edge detection Laplacian" + '.mp4'
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M','P','V','4'), 60.0, (int(vid.get(3)), int(vid.get(4))),isColor=False)
    out1 = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten1, cv2.VideoWriter_fourcc('M','P','V','4'), 60.0, (int(vid.get(3)), int(vid.get(4))),isColor=False)
    out2 = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten2, cv2.VideoWriter_fourcc('M','P','V','4'), 60.0, (int(vid.get(3)), int(vid.get(4))),isColor=False)

    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            kernel_x = np.array([[-1, 0, 1],
                                 [-2, 0, 2],
                                 [-1, 0, 1]])
            kernel_y = np.array([[-1, -2, -1],
                                 [0, 0, 0],
                                 [1, 2, 1]])
            fx = cv2.filter2D(anhxam, -1, kernel_x)
            fy = cv2.filter2D(anhxam, -1, kernel_y)
            kethopXY = cv2.bitwise_or(fx, fy)
            canny = cv2.Canny(anhxam, 100, 200)
            lap = cv2.Laplacian(anhxam, cv2.CV_64F, ksize=3)
            lap = np.uint8(np.absolute(lap))
            out.write(kethopXY)
            out1.write(canny)
            out2.write(lap)
            cv2.imshow("Gradient image X", fx)
            cv2.imshow("Gradient image Y", fy)
            cv2.imshow("Ket hop SobelX and Y", kethopXY)
            cv2.imshow("Canny edge detection", canny)
            cv2.imshow("Laplacian", lap)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    out1.release()
    out2.release()
    cv2.destroyAllWindows()
def highPassFiltering(img,size):#Transfer parameters are Fourier transform spectrogram and filter size
    h, w = img.shape[0:2]#Getting image properties
    h1,w1 = int(h/2), int(w/2)#Find the center point of the Fourier spectrum
    img[h1-int(size/2):h1+int(size/2), w1-int(size/2):w1+int(size/2)] = 0#Center point plus or minus half of the filter size, forming a filter size that defines the size, then set to 0
    return img

def Highpassfilter():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        ten = "Hightpass filter" + ".mp4"
        out = cv2.VideoWriter("D:\\Hoc\\xu ly anh\\video for python\\" + ten,
            cv2.VideoWriter_fourcc('M', 'P', '4', 'V'), 60.0, (int(vid.get(3)), int(vid.get(4))),isColor=False)
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)

            # Fourier transform
            img_dft = np.fft.fft2(anhxam)
            dft_shift = np.fft.fftshift(img_dft)  # Move frequency domain from upper left to middle

            # High pass filter
            dft_shift = highPassFiltering(dft_shift, 200)
            res = np.log(np.abs(dft_shift))

            # Inverse Fourier Transform
            idft_shift = np.fft.ifftshift(dft_shift)  # Move the frequency domain from the middle to the upper left corner
            ifimg = np.fft.ifft2(idft_shift)  # Fourier library function call
            ifimg = np.abs(ifimg)

            # out.write(np.float32(ifimg))
            cv2.imshow("ifimg", np.int8(ifimg))
            cv2.imshow("High pass filter",res)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    out.release()
    vid.release()
    cv2.destroyAllWindows()

def lowPassFiltering(img,size):#Transfer parameters are Fourier transform spectrogram and filter size
    h, w = img.shape[0:2]#Getting image properties
    h1,w1 = int(h/2), int(w/2)#Find the center point of the Fourier spectrum
    img2 = np.zeros((h, w), np.uint8)#Define a blank black image with the same size as the Fourier Transform Transfer
    img2[h1-int(size/2):h1+int(size/2), w1-int(size/2):w1+int(size/2)] = 1#Center point plus or minus half of the filter size, forming a filter size that defines the size, then set to 1, preserving the low frequency part
    img3=img2*img #A low-pass filter is obtained by multiplying the defined low-pass filter with the incoming Fourier spectrogram one-to-one.
    return img3

def Lowpassfilter():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Lowpass filter" + '.mp4'
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M', 'P', 'V', '4'),
                          60.0, (int(vid.get(3)), int(vid.get(4))), isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()

        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)

            # Fourier transform
            img_dft = np.fft.fft2(anhxam)
            dft_shift = np.fft.fftshift(img_dft)  # Move frequency domain from upper left to middle

            # Low-pass filter
            dft_shift = lowPassFiltering(dft_shift, 200)
            res = np.log(np.abs(dft_shift))

            # Inverse Fourier Transform
            idft_shift = np.fft.ifftshift(dft_shift)  # Move the frequency domain from the middle to the upper left corner
            ifimg = np.fft.ifft2(idft_shift)  # Fourier library function call
            ifimg = np.abs(ifimg)
            # last = cv2.normalize(ifimg, 0, 255, cv2.NORM_MINMAX)
            # out.write(np.float32(ifimg))
            cv2.imshow("ifimg", np.int8(ifimg))
            cv2.imshow("Low pass filter", res)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    out.release()
    vid.release()
    cv2.destroyAllWindows()



def Bilateral():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "Bilateral" + '.mp4'
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M','P','V','4'), 60.0, (int(vid.get(3)), int(vid.get(4))),isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            # Apply bilateral filter with d = 9,
            # sigmaColor = sigmaSpace = 75.
            bilateral = cv2.bilateralFilter(anhxam, 9, 75, 75)
            out.write(bilateral)
            cv2.imshow("Bilateral filter", bilateral)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    cv2.destroyAllWindows()

def Nonlocalmean():
    vid = cv2.VideoCapture(filepath)
    if vid.isOpened() == False:
        print("Error when open video")
        # sys.exit(1)
    ten = "NonLocalMean" + '.mp4'
    out = cv2.VideoWriter('D:\\Hoc\\xu ly anh\\video for python\\' + ten, cv2.VideoWriter_fourcc('M','P','V','4'), 60.0, (int(vid.get(3)), int(vid.get(4))),isColor=False)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Video xam", anhxam)
            nonlocalmean = cv2.fastNlMeansDenoising(np.uint8(anhxam), None, 10, 7, 21)
            out.write(nonlocalmean)
            cv2.imshow("NonLocalMeans filter", nonlocalmean)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
    vid.release()
    out.release()
    cv2.destroyAllWindows()


root=Tk()
root.geometry("720x720")
mb=Menubutton(root,text="Menu")
lb = Label(root, text="Chương trình xử lý video đơn giản",font=("Arial", 25)).pack(pady=0)
button=Button(text="Chon file",width=20,height=2,command=openfile)
button2=Button(text="Video xam",width=20,height=2,command=show)
His=Button(text="Can bang histogram",width=20,height=2,command=Histofram)
TachNguong=Button(text="Tach nguong",width=20,height=2,command=tachnguong)
Ambanbtn=Button(text="Lay am ban",width=20,height=2,command=Amban)
Logarithbtn=Button(text="Bien doi logarith",width=20,height=2,command=Loga)
Contrastbtn=Button(text="Tang do tuong phan",width=20,height=2,command=contrast)
Mean=Button(text="Mean filter",width=20,height=2,command=Meanfilter)
Median=Button(text="Median filter",width=20,height=2,command=Medianfilter)
Gausssian=Button(text="Gaussian filter",width=20,height=2,command=GaussianFilter)
Liner=Button(text="Liner sharpen",width=20,height=2,command=LinerSharpen)
Gradienbtn=Button(text="Gradien cua video",width=20,height=2,command=Gradien)
Edge=Button(text="Edge detection",width=20,height=2,command=EdgeDetection)
highpass=Button(text="Highpass filter",width=20,height=2,command=Highpassfilter)
lowpass=Button(text="Lowpass filter",width=20,height=2,command=Lowpassfilter)
Bilateralbtn=Button(text="Bilateral",width=20,height=2,command=Bilateral)
Nonlocal=Button(text="NonLocalMean",width=20,height=2,command=Nonlocalmean)
button.place(x=240,y=50)
button2.place(x=20,y=100)
His.place(x=20,y=150)
TachNguong.place(x=20,y=200)
Ambanbtn.place(x=20,y=250)
Logarithbtn.place(x=20,y=300)
Contrastbtn.place(x=20,y=350)
Mean.place(x=20,y=400)
Median.place(x=400,y=100)
Gausssian.place(x=400,y=150)
Liner.place(x=400,y=200)
Gradienbtn.place(x=400,y=250)
Edge.place(x=400,y=300)
highpass.place(x=400,y=350)
lowpass.place(x=400,y=400)
Bilateralbtn.place(x=20,y=450)
Nonlocal.place(x=400,y=450)
root.mainloop()