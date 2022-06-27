st = 'srtrwffsrrt'


def FirstNonRepeat(st):
    arr = list(st)
    freq = [0]*255
    for i in range(len(arr)):
        freq[ord(arr[i])] += 1
    for item in arr:
        if freq[ord(item)] == 1:
            return item
    return '0'


print(FirstNonRepeat(st))