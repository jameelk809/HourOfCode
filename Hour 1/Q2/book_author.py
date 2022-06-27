batch = input().lower()
unique = 0
for i in range(len(batch)):
    flag = True
    count = 0
    for j in range(len(batch)):
        if batch[i] == batch[j]:
            count += 1
        if count > 1:
            flag = False
            break
    if flag:
        unique += 1
print(unique)


# string = 'HelloWorld'.lower()
# arr = list(string)
# temp = [0]*255
# count = 0
# for i in range(len(arr)):
#     temp[ord(arr[i])] += 1
# for i in range(255):
#     if temp[i] == 1:
#         count += 1
# print(count)
