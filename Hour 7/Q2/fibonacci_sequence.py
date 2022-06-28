def fibonacci(n):
    a, b = 0, 1
    if n == 0:
        return a
    elif n == 1:
        return b
    else:
        for i in range(1, n):
            c = a + b
            a = b
            b = c
        return b


fibonacci_series = []
for i in range(20):
    fibonacci_series.append(fibonacci(i))

n = input()
count = 0
arr = list(map(int, input().split()))
for x in arr:
    if x in fibonacci_series:
        count += 1
print(count)

