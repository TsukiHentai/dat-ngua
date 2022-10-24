import re
def stringNormalize(s):
    s = s.replace(".", ". ")
    s = s.replace(",", ", ")
    s = re.sub(r"\s+", ' ', s)
    print('. '.join(map(lambda s: s.strip().capitalize(), s.split('.'))))
s1 = input()
s2 = input()
stringNormalize(s1)
stringNormalize(s2)
