#!/usr/bin/python3
for n in range(10):
    for k in range(n + 1, 10):
        print("{:02d}".format((n * 10) + k), end=(', ' if n < 8 else '\n'))
