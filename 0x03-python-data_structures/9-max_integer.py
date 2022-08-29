#!/usr/bin/python3
def max_integer(my_list=[]):
    if not my_list:
        return None
    r = my_list[0]
    for e in my_list:
        if e > r:
            r = e
    return (r)
