import cv2
import sys
import os
video_path= sys.argv[1]
if video_path=="0":# đọc webcam
    cap=cv2.VideoCapture(0)
else:
    cap=cv2.VideoCapture(video_path)
if cap.isOpened()==False:
    print("Error when open video")
    sys.exit(1)
while cap.isOpened()==True:
    ret,frame=cap.read()
    frame_width = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
    frame_height = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
    size = (frame_width, frame_height)
    out = cv2.VideoWriter(os.path.join('D:\\Hoc\\xu ly anh\\video for python\\Can bang histogram.mp4'),
                          cv2.VideoWriter_fourcc(*'FMP4'), 30, size)
    if ret==True:
        out.write(frame)
        cv2.imshow("Input video",frame)
        if cv2.waitKey(10)==ord('q'):
            break
    else:
        break
cap.release()
cv2.destroyAllWindows()