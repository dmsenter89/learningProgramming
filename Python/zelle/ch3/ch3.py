import math

# exercise 1
# calculate volume and surface of sphere from input
print('--------------------------------------------')
print('Exercise 1 - Calculate vol.and surf. of sphere from Input.')
radius = float(input("Enter radius: "))
V = 4.0/3.0*math.pi*radius**3
A = 4.0*math.pi*radius**2
print("Volume={0}, Surface={1}.".format(V,A))
print('End exercise 1.')

# exercise 2
print('--------------------------------------------')
print('Exercise 2 - Cost/sq inch of Pizza.')
diam = int(input("Diameter of Pizz (int): "))
cost = float(input('Cost: '))
A = math.pi*(diam/2.0)**2
cpi = cost/A
print('Cost: ${0}/sqr inch.'.format(round(cpi,2)))
print('End exercise 2.')

# exercise 3
print('--------------------------------------------')
print('Exercise 3 - Epact of Gregorian year.')
year = int(input('Enter 4 digit year: '))
C = year//100
epact = (8+(C//4)-C+((8*C+13)//25)+11*(year%19))%30
print('Epact =', epact, '.')
