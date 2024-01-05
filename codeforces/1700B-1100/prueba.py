t = int(input())

for _ in range(t):
    n = int(input())
    number = int(input())
    result = (10**n + 1) - number
    if len(str(result)) != n:
        str_result = '1' * n
        result += int(str_result) - 1
    print(result)
