from math import log as ln
import sys

def present_amount(A0, p, n):
    return A0*(1+p/(360.0*100))**n

def initial_amount(A, p, n):
    return A*(1+ p/(360*100))**(-n)

def days(A0, A, p):
    return ln(A/A0)/ln(1+ p/(360*100))

def annual_rate(A0,A,n):
    return 360*100*((A/A0)**(1/n)-1)

def _verify():
    # Comp. Values
    A = 2.2133983053266699; A0 = 2.0; p = 5; n = 730
    # Given three, compute the other two and compare
    A_comp = present_amount(A0,p,n)
    A0_comp = initial_amount(A, p, n)
    n_comp = days(A0,A,p)
    p_comp = annual_rate(A0,A,n)
    print("A = {:g} ({:g})\nA0 = {:g} ({:.1f})\nn = {:g} ({:d})\np = {:g} ({:.1f})"\
            .format(A_comp, A, A0_comp, A0, n_comp, n, p_comp, p))
    
if __name__ == '__main__':
    if len(sys.argv)==2 and sys.argv[1] == 'verify':
        _verify()
