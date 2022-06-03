from sys import exit, argv
from cs50 import get_string

def main():
    argc = len(argv)

    if(not argc == 2):
        print("Usage: caesar.py key")
        exit(1)

    for i in range(len(argv[1])):
        if not argv[1][i].isdigit():
            print("Usage: carsr.py key")
            exit(1)

    k = int(argv[1])
    p = get_string("plaintext: ")
    print("ciphertext: ")

    for i in range(len(p)):
        if p[i].isupper():
            print((ord(p[i])+k-65)%26 + 65)
            #chr((ord(char) + s-65) % 26 + 65)

        elif p[i].islower():
            print((ord(p[i])+k-97)%26 + 97)

        else:
            print(p[i])

main()