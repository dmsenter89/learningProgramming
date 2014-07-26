#! /usr/bin/python3

# Let p be the interest rate in percent per year. Then an initial amount A
# grows to A*(1+(p/100))**n after n years.
# Initial data: 1000 EUR, 3 years, 5% interest

A = 1000
n = 3
p = 5

new = A*(1+(p/100))**n

print('The initial 1,000 EUR grew to {0:.2f} EUR.'.format(new))
