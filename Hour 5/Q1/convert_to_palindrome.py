def isPalindrome(strn):
    if strn == strn[::-1]:
        return True
    return False


def convert_to_palindrome(strng):
    if isPalindrome(strng):
        return 0
    length = len(strng)
    res = 0
    i = 0
    while length > 0:
        tempstr = strng[i:]
        if isPalindrome(tempstr):
            res = i
            break
        i = i + 1
        length -= 1
    return strng[res - 1::-1]


string = input()
print(convert_to_palindrome(string))