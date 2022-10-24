import cv2
import sys
import numpy as np
def zero():
    vid = cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\COSTA RICA IN 4K 60fps HDR (ULTRA HD)_2.mp4")
    if vid.isOpened() == False:
        print("Error when open video")
        sys.exit(1)
    while vid.isOpened() == True:
        ret, frame = vid.read()
        if ret == True:
            anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            cv2.imshow("Anh xam",anhxam)
            if cv2.waitKey(10) == ord('q'):
                break
        else:
            break
def one():
    return "one"
def two():
    return "two"
switcher = {
    0: zero,
    1: one,
    2: two
}
def numbers_to_strings(argument):
    # Get the function from switcher dictionary
    func = switcher.get(argument, "nothing")
    # Execute the function
    return func()
print("Chuong trinh don gian"
      "0. In ra zero"
      "1. In ra one"
      "2. In ra two")
i=int
while i!=9:
    i=int(input("Nhap so lua chon"))
    check=True
    while check==True:
        if i==99:
            print("Thoat chuong trinh")
            check=False
        else:
            print(numbers_to_strings(i))
