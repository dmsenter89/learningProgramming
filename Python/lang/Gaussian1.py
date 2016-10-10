#! /usr/bin/python3

# Program that evaluates the Gaussian function
from math import sqrt, pi, exp, e

m = 0 
s = 2
x = 1

f = 1/(s*sqrt(2*pi)) * exp(-0.5* ((x-m)/s)**2)
print('The function evaluates to {0:.4f}'.format(f))
