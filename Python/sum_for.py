#! /usr/bin/python3

# set up
s = 0

# looping fun
for k in range(1,100):
    s += 1/k
    print(s)

print('Final value: {:0.6f}'.format(s))
