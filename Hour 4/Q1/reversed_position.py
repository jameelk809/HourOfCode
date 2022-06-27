data = input()
count = 0
rev_data = ''
for x in data:
    rev_data = x + rev_data
for i in range(len(data)):
    if data[i] == rev_data[i]:
        count += 1
print(count)