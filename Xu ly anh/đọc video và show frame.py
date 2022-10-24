import cv2
import os
x=cv2.VideoCapture(r"C:\Users\Tsuki Hentai\Downloads\Video\y2mate.com - Đồ Ngu Đồ Ăn Hại Cút Mẹ Mày Đi_360p.mp4")
while x.isOpened()==True:
    ret,frame=x.read()
    frame_width = int(x.get(cv2.CAP_PROP_FRAME_WIDTH))
    frame_height = int(x.get(cv2.CAP_PROP_FRAME_HEIGHT))
    size = (frame_width, frame_height)
    out12 = cv2.VideoWriter(os.path.join('D:\\Hoc\\xu ly anh\\video for python\\Can bang histogram.avi'),cv2.VideoWriter_fourcc(*'MPEG'), 30, size)
    if ret==True:
        # cv2.imshow("Frame",frame)
        anhxam = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        out12.write(anhxam)
        cv2.imshow("Anh xam", anhxam)
        if cv2.waitKey(20) == ord('q'):
            break
    else:
        break
x.release()
out12.release()
cv2.destroyAllWindows()