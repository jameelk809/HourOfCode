n = int(input())
binary = ''
while n > 0:
    r = n % 2
    n //= 2
    binary = str(r) + binary                                # this binary is stored in reverse (correct) order.
XOR_result = ''
for i in range(0, len(binary)-1):
    XOR_result += str(int(binary[i]) ^ int(binary[i + 1]))
XOR_result += str(int(binary[-1]) ^ 1)                      # last bit is XORed with 1
res = 0
for i in range(len(XOR_result)):
    res += int(XOR_result[i]) * 2 ** (len(XOR_result) - 1 - i)
print(res)
