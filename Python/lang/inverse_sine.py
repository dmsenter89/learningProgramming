#! /usr/bin/python3

# Program to write out various asin and sin values

from math import sin, asin

ns = [0.05*i for i in range(0,21)]

print("Table comparing various values of Sin")
print("-------------------------------------")
print(' X Value    Asin     Sin')

for i in ns:
    v1 = asin(i)
    v2 = sin(v1)
    print('{a:8.4f} {b:9.4f} {c:10.4f}'.format(a=i, b=v1, c=v2))
