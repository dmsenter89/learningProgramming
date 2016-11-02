# create acronyms

instring = input('Input String: ')
acronym = ""
for w in instring.split():
    acronym = acronym + w[0].upper()

print("The correspinding acronym is {}.".format(acronym))
