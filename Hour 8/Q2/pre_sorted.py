arr = []
n = int(input())
for _ in range(n):
    arr.append(int(input()))
count = 0
sorted_arr = sorted(arr)
for i in range(5):
    if arr[i] == sorted_arr[i]:
        count += 1
print(count)
