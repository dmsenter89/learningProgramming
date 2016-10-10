#! /usr/bin/python3

# initial values
v0 = 1
n = 11

# set up t-values
t = [i*0.05 for i in range(0,5)]

print('Table of y and y(t) Values')
print('--------------------------')
print('  t          y(t)')
for i in t:
    yT = v0*i - 0.5*9.81*i**2
    print('{:5.3f}   {:9.3f}'.format(i,yT))

