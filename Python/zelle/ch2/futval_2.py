# modified futval for monthly addition to investment

print('Hello. This program will determine the value of your investment.')
pini = eval(input('How much do you invest initially? '))
addmonthly = eval(input('How much do you want to add per year? '))
apr = eval(input('Whats the apr? '))

n = 10  # number of years to invest
invest = pini
for i in range(1,n+1):
    invest *= (1+apr/100.0)
    invest += addmonthly

print("You will have {:.2f} dollars after {} years.".format(invest, n))
input("Enter anything to quit.")
