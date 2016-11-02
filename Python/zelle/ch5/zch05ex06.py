# numerology problem

def word2number(instring):
    val = 0
    for word in instring.split():
        for letter in word:
            val = val + (ord(letter.upper())-64)
    return val

name = input('Enter name: ')
print('This name has the value {}.'.format(word2number(name)))
