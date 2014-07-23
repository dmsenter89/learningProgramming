#! /usr/bin/python3

import sys

try:
    C = float(sys.argv[1])
except IndexError:
    print('You failed to provide Celsius as input.')
    sys.exit(1) #abort due to error
except ValueError:
    print('The input must be a pure number.')
    sys.exit(1)

F = 9*C/5+32
print(F)
