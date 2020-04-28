#!/usr/bin/python3
def uppercase(str):
    upper_str = ""
    for char in str:
        if ord(char) >= 97 and ord(char) <= 122:
            temp = ord(char) - 32
            char = chr(temp)
        upper_str = upper_str + char
    print(upper_str)
