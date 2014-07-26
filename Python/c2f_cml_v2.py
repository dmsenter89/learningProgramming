#! /usr/bin/python3

import sys
if len(sys.argv)<2:
    print('You failed to provide Celcius as input')
    sys.exit(1) # abort due to error
C = float(sys.argv[1])
F = 9*C/5+32
print(F)
