# inp = [3521, 2452, 1352]
inp = list(map(int, input().split()))
min_th = 100
max_hu = -1
min_te = 100
max_on = -1
for num in inp:
    th = num // 1000
    hu = (num % 1000)//100
    te = (num % 100)//10
    on = num % 10
    if th < min_th:
        min_th = th
    if hu > max_hu:
        max_hu = hu
    if te < min_te:
        min_te = te
    if on > max_on:
        max_on = on
print(min_th*1000 + max_hu*100 + min_te*10 + max_on)