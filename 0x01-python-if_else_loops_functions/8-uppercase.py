#!/usr/bin/python3
def uppercase(str):
#    upper_str = ""
#    for char in str:
#        if ord(char) >= 97 and ord(char) <= 122:
#            temp = ord(char) - 32
#            char = chr(temp)
#            print('{}'.format(str[char]), end='')
#        upper_str = upper_str + char
#    print(upper_str)
    for i in str:
        i = ord(i)
        if i >= 97 and i <= 122:
            i = i - 32
        print("{:c}".format(i), end='')
    print()
