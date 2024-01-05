import math
n = 871
s = 0
d = n
while d / 5 >= 1:
    s += math.floor(d/5)
    d = math.floor(d/5)
    
print(s)
