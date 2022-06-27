string = 'coding is awesome'
arr = list(string.split())
arr = arr[::-1]
rev_arr = []
for item in arr:
    rev_arr.append(item)
print(' '.join(rev_arr))
