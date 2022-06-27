n = int(input())
arr = []
j = 0
for i in range(1, n + 1):
    arr.append(i)
while n > 1:
    j = 2 * j + 1
    n //= 2
print(arr[j])
