#! /usr/bin/python3

mtr = float(input('How many meters? '))

inches = mtr / 0.0254
feet = inches/12
yrd = feet / 3
mile = yrd/1760

print(''' {0:.2f} meters is equivalent to:
{1:g} inches
{2:g} feet
{3:g} yards
{4:g} miles. '''.format(mtr,inches,feet,yrd,mile))
