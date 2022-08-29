#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    a_len = len(tuple_a)
    b_len = len(tuple_b)
    r = []
    for i in range(0, 2):
        sum_ = 0
        if i < a_len:
            sum_ += tuple_a[i]
        if i < b_len:
            sum_ += tuple_b[i]
        r.append(sum_)
    return (tuple(x for x in r))
