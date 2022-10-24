import sys
import skimage
import cv2
import numpy as np
a=int
while a!=100:
    print("Chương trình xử lý video đơn giản")
    print("0. Hiện ảnh xám")
    print("1. Cân bằng histogram")
    print("2. Tách ngưỡng")
    print("3. Màu âm bản")
    print("4. Biến đổi logarith")
    print("5. Tăng độ tương phản")
    print("6. Mean filter")
    print("7. Median blur")
    print("8. Gaussian")
    print("9. Linear sharpeing")
    print("10. Gradient của ảnh")
    print("11. Edge detection")
    print("14. Bilateral filter")
    print("15. NonLocalMeans")
    print("100. Thoát chuong trình")
    a=int(input("Mời bạn nhập lựa chọn:"))

    if a==0: #ảnh xám test
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
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

    elif a==1: # Cân bằng histogram của ảnh
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                histogram = cv2.equalizeHist(anhxam)
                cv2.imshow("Can bang Histogram", histogram)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()

    elif a==2: #Tách ngưỡng của ảnh
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                ret, tachnguong = cv2.threshold(anhxam, 127, 255, cv2.THRESH_BINARY)
                tachnguong1 = cv2.adaptiveThreshold(anhxam, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, 11, 2)
                tachnguong2 = cv2.adaptiveThreshold(anhxam, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 11, 2)
                cv2.imshow("Tach nguong",tachnguong)
                cv2.imshow("Tach nguong linh hoat trung binh",tachnguong1)
                cv2.imshow("Tach nguong linh hoat Gaussian",tachnguong2)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()

    elif a==3: # Lấy ảnh âm bản
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                cv2.imshow("Video am ban",255-anhxam)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()

    elif a==4: # Biến đổi logarith
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                c = 255 / np.log(1 + np.max(anhxam))
                logaritthmic = c * (np.log(anhxam + 1))

                logaritthmic = np.array(logaritthmic, dtype=np.uint8)

                cv2.imshow('Video bien doi log', logaritthmic)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()

    elif a==5: # Tăng độ tương phản
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                max = np.max(anhxam)
                min = np.min(anhxam)
                contrast = 255 * (anhxam-min) / (max-min)
                cv2.imshow("Tang tuong phan",contrast)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()

    elif a==6: # Phép lọc không gian mean
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                mean = cv2.blur(anhxam, (5, 5))
                cv2.imshow("Mean filter",mean)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()


    elif a==7: # Phép lọc không gian median
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                saltpepper = skimage.util.random_noise(anhxam, mode="s&p", seed=None, clip=True)
                cv2.imshow("Salt and pepper noise", saltpepper)
                salt = cv2.normalize(saltpepper, saltpepper, 0, 255, cv2.NORM_MINMAX)
                median = cv2.medianBlur(np.uint8(salt), 5)
                cv2.imshow("Median filter",median)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()


    elif a==8: # Phép lọc không gian gaussian
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                gaussian = cv2.GaussianBlur(anhxam, (5, 5), 0)
                cv2.imshow("Gaussian filter",gaussian)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()


    elif a==9: # Phép lọc không gian linear sharpen
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                gaussian = cv2.GaussianBlur(anhxam, (5, 5), 0)
                sharp=1.5*anhxam-0.5*gaussian
                last=cv2.normalize(sharp,0,255,cv2.NORM_MINMAX)
                cv2.imshow("Linear sharpening filter",last)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()


    elif a==10: # Lấy ảnh gradient
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
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
                kethopXY=cv2.bitwise_or(fx, fy)
                cv2.imshow("Gradient image X", fx)
                cv2.imshow("Gradient image Y", fy)
                cv2.imshow("Ket hop SobelX and Y",kethopXY)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()

    elif a==11: # Phát hiện biên edge detectiom
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
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
                kethopXY=cv2.bitwise_or(fx, fy)
                canny=cv2.Canny(anhxam,100,200)
                lap = cv2.Laplacian(anhxam, cv2.CV_64F, ksize=3)
                lap = np.uint8(np.absolute(lap))
                cv2.imshow("Gradient image X", fx)
                cv2.imshow("Gradient image Y", fy)
                cv2.imshow("Ket hop SobelX and Y",kethopXY)
                cv2.imshow("Canny edge detection",canny)
                cv2.imshow("Laplacian",lap)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()









    elif a==14: # Phép lọc Bilateral
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                # Apply bilateral filter with d = 9,
                # sigmaColor = sigmaSpace = 75.
                bilateral = cv2.bilateralFilter(anhxam, 9, 75, 75)
                cv2.imshow("Bilateral filter",bilateral)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()

    elif a==15: # Phép lọc không gian NonLocalMean
        vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
        if vid.isOpened() == False:
            print("Error when open video")
            # sys.exit(1)
        while vid.isOpened() == True:
            ret, frame = vid.read()
            if ret == True:
                anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                cv2.imshow("Video xam", anhxam)
                nonlocalmean = cv2.fastNlMeansDenoising(np.uint8(anhxam), None, 10, 7, 21)
                cv2.imshow("NonLocalMeans filter",nonlocalmean)
                if cv2.waitKey(10) == ord('q'):
                    break
            else:
                break
        vid.release()
        cv2.destroyAllWindows()



    if a==100:
        print("Thoát chương trình")
        sys.exit()

