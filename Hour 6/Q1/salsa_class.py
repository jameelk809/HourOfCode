queue_A = '00110100'
queue_B = '00000111'
count = 0
for i in range(len(queue_A)):
    if queue_A[i] != queue_B[i]:
        count += 1
print(count*100//len(queue_A))