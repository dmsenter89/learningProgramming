#! /usr/bin/python3

# initial values
v0 = 1
n = 11

# set up t-values
t = [i*0.05 for i in range(0,5)]
y = [v0*i - 0.5*9.81*i**2 for i in t]


print('Table of t and y(t) Values')
print('--------------------------')
print('     t     y(t)')
for m,n in zip(t,y):
    print('{:6.3f} {:8.3f}'.format(m,n))
