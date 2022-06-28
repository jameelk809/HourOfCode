# A number, R is Fibonacci number only if one of (5 * R * R + 4) or ( 5 * R * R - 4) 
# or both of them are the perfect square.

import math


def is_Perfect_Square(K):
    s = int(math.sqrt(K))
    return s * s == K


def is_Fibonacci(R):
    return is_Perfect_Square(5 * R * R + 4) or is_Perfect_Square(5 * R * R - 4)


n = int(input())
count = 0
arr = []
for _ in range(n):
    arr.append(int(input()))
for x in arr:
    if is_Fibonacci(x):
        count += 1
print(count)




# old school method
"""
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

"""