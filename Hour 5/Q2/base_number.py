def base_number(msg):
    dec_msg = ''
    msg = msg.split()
    for x in range(len(msg)):
        if msg[x] == '_':
            dec_msg += ' '
        elif msg[x] == '#':
            dec_msg += msg[x+1]
        elif msg[x-1] == '#':
            pass
        elif msg[x].isdigit():
            dec_msg += chr(64+int(msg[x]))
        else:
            dec_msg += msg[x]
    return dec_msg


# msg = '2 1 4 _ 3 1 20 @ # 459'
# msg = '! 2 # 4 % 6'
msg = input()
print(base_number(msg))
