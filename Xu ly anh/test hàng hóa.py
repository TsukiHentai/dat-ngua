# Import required packages
import cv2
import pytesseract

# Mention the installed location of Tesseract-OCR in your system
pytesseract.pytesseract.tesseract_cmd = 'C:/Program Files/Tesseract-OCR/tesseract.exe'

# Camera Init
cap = cv2.VideoCapture(0)
init = False

while True:
    try:
        ret, img = cap.read()
        if ret == False:
            break

        if init == True:
            roi_cropped = img[int(roi[1]):int(roi[1] + roi[3]), int(roi[0]):int(roi[0] + roi[2])]
            cv2.imshow("roi_cropped", roi_cropped)
        else:
            roi_cropped = img

        gray = cv2.cvtColor(roi_cropped, cv2.COLOR_BGR2GRAY)

        ret, thresh1 = cv2.threshold(gray, 0, 255, cv2.THRESH_OTSU | cv2.THRESH_BINARY_INV)
        rect_kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (10, 10))

        # Creating a copy of image
        im2 = img.copy()

        if init == True:
            x, y, w, h = roi
            text = pytesseract.image_to_string(thresh1)
            print(text)
            cv2.putText(im2, text, (x, y + h), cv2.FONT_HERSHEY_COMPLEX, 1, (0, 255, 0), 1, cv2.LINE_AA)
            cv2.rectangle(im2, (x, y), (x + w, y + h), (0, 255, 0), 2)

        cv2.imshow("txt", im2)
        k = cv2.waitKey(1)
        if k == 27:
            break
        elif k == 13:
            roi = cv2.selectROI(img)
            init = True

    except Exception as e:
        print(e)