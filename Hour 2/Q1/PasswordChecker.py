def CheckPassword(password, n):
    num = cap = flag = 0
    if len(password) >= 4:
        flag = 1
        arr = list(password)
        if 48 <= ord(arr[0]) <= 57:
            flag = 0
        for item in arr:
            if 48 <= ord(item) <= 57:
                num += 1
            if 65 <= ord(item) <= 90:
                cap += 1
            if item == ' ' or item == '/':
                flag = 0
        if num < 1 or cap < 1:
            flag = 0
    return flag


password = input()
print(CheckPassword(password, len(password)))
