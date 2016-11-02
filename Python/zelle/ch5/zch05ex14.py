# wc utility
# counts the number of lines, number of words and number of characters in a file
import sys
# file-name will be stored as sys.argv[1]

def main():
    infile = open(sys.argv[1],'r')
    lin_count = 0
    word_count = 0
    char_count = 0
    for line in infile:
        lin_count = lin_count+1
        for word in line.split():
            word_count = word_count+1
            for char in word:
                char_count = char_count+1
    infile.close()
    print('-'*17)
    print("|{0:<8} {1:6}|".format("Lines:", lin_count))
    print("|{0:<8} {1:6}|".format("Words:", word_count))
    print("|{0:<8} {1:6}|".format("Chars:", char_count))
    print('-'*17)


main()
