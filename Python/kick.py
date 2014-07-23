#! /usr/bin/python3

# Exercise 1.11
# Evaluating a football.

from math import pi

def fD(cD,rho,a,v):
    vals = 0.5*cD*rho*a*v**2
    return vals

rho = 1.2           # kg m^-3
a = 0.11            # radius in meters
A = pi*a
mass = 0.43         # kg
cD = 0.2            # what unit?
g = 9.81            # m s^-2
fG = mass*g

v1 = 120 * 0.2778   # converted to m/s
v2 = 10 * 0.2778    # converted to m/s

fd1 = fD(cD,rho,A,v1)
fd2 = fD(cD,rho,A,v2)

print('''
The drag forces of a football kicked at 120 kph is {fd1:.2f}.
The drag forces of a football kicket at 10 kph is {fd2:.2f}.
Compare this to the universal gravitational forces experienced
by the ball, {fG:.2f}.
'''.format(fd1=fd1,fd2=fd2,fG=fG))
