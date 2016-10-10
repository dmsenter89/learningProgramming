from math import log

def L(x,n):
    s = 0
    for i in range(1,n+1):
        s+= (1/i)*(x/(1+x))**i
    value_of_sum = s
    first_neglected_term = (1/(n+1))*(x/(1+x))**(n+1)
    exact_error = log(x+1)-value_of_sum
    return value_of_sum, first_neglected_term, exact_error
