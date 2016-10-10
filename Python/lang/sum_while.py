#! /usr/bin/python3

# set up
s = 0; k = 1; M = 100

# looping fun
while k< M:
    s += 1/k
    k += 1
    print(s)

print('Final value: {:0.6f}'.format(s))
