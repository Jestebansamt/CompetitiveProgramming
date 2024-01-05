str = input()
newstr = str.split('ABC')
size1 = 0
size2 = len(newstr)

while len(newstr) >= 3 and size1 != size2:
    newstr = str.join('')
    size1 = len(newstr)
    newstr = str.split('ABC')
    size2 = len(newstr)

print(newstr)