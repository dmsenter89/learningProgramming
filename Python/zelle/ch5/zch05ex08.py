# ceasar cypher

def make_secret(mess, key):
    dic = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    nmess = ""
    for word in mess.split():
        for letter in word:
            position = ord(letter.upper())-65
            nmess = nmess + dic[(position+key)%26]
        nmess = nmess + " "
    return nmess


inmess = input('Enter the message: ')
shift = int(input('Enter the integer shift: '))
newmess = make_secret(inmess, shift)
print('Your message is encrypted as:\n{}'.format(newmess))
