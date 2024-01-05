string = equation

string = string.replace('"', '').replace(
"-", " -").replace("+", " ").replace("=", " = ").split(" ")
countx = 0
countn = 0
negative = 1

for x in string:
    if x == '=':
        negative = -1
    if x == 'x':
        countx += 1*negative
    elif x == '-x':
        count += -1*negative
    elif 'x' in x:
        countx += int(x[:-1])
        *negative
    if x.isdigit() or (x.startswith('-') and x[1:].isdigit()):
        countn += int(x)*negative

if(int(countx) != 0):
    solution = countn/countx

if countx == 1:
    print("x=" + str(solution))
elif countn == 0:
    print("Infinite solutions")
elif countx == 0:
    print("No solution")
