#! /usr/bin/python3

Cdegrees = [-20,-15,-10,-5,0,5,10,15,20,25,30]
print('    C     F')
for C in Cdegrees:
     F = (9/5)*C + 32
     print('{0:5d} {1:5.1f}'.format(C,F))
