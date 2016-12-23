#! /usr/bin/python

# input: hours worked and hourly rate
# output: total wages for week

def main():
    hrs = float(input("How many hours were worked this week? "))
    wage = float(input("Hourly wage: "))

    if hrs<=40:
        pay = hrs*wage
    else:
        hrs = hrs-40
        pay = 40*wage+1.5*hrs*wage

    print("Wages for this week are ${}".format(pay))


if __name__ == '__main__':
    main()
