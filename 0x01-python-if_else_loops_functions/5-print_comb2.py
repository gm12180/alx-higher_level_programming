#!/usr/bin/python3
for n in range(100):
    print("{n:02d}".format(n=n), end=(', ' if n < 99 else '\n'))
