#! /usr/bin/python3

# Generate x coordinates between 1 and 2, spacing 0.01
# Formula: xi = 1+ ih

x = [1+i*0.01 for i in range(0,101)]
print(x)
