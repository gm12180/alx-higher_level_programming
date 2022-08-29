#!/usr/bin/python3
def print_list_integer(my_list=[]):
    text = ""
    for v in my_list[:]:
        text += "{:d}\n".format(v)
    print(text, end='')
