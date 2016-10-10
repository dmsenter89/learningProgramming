#! /usr/bin/python3

import sys

def read_C():
    try:
        C = float(sys.argv[1])
    except IndexError as x:
        raise IndexError('Celcius degrees must be supplied on the cli.') from IndexError
        sys.exit(1) #abort due to error
    except ValueError:
        raise ValueError('The input must be a pure number.')
        sys.exit(1)
    if C < -273.15:
        raise ValueError('C={:g} is a non-physical value!'.format(C))
    return C

C = read_C()
F = 9*C/5+32
print(F)
