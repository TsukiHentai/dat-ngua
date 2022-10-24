#cần thư viện
#wheel
#Pipwin
#
import pyttsx3
_engine=pyttsx3.init()
voices = _engine.getProperty('voices')
_engine.setProperty('voice', voices[1].id)
_engine.setProperty('rate',200)
file =open("D:/text.txt","r")
a=file.read()
b=file.readline()
_engine.say(a,b)
file.close()
_engine.runAndWait()