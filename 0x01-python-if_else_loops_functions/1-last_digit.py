#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_digit = (-1 if number < 0 else 1) * int(repr(number)[-1])
msg = f"Last digit of {number:d} is {last_digit:d}"
if last_digit > 5:
        msg += f" and is greater than 5"
    elif last_digit == 0:
            msg += f" and is 0"
        else:
                msg += f" and is less than 6 and not 0"
                print(msg)
