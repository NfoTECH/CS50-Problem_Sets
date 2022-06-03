from cs50 import get_string
import sys

cardNum = get_string("Card Digits: ")
if cardNum.strip().isdigit():
    copyNum = cardNum[::1]

    firstCase = sum ([((int(x) * 2)//10) + (int(x) * 2 % 10) for x in copyNum[0::2]])
    print(firstCase)
    secondCase = sum ([int(x) for x in copyNum[1::2]])
    print(secondCase)

    total = int(firstCase + secondCase)
    print(total)
    if total % 10 != 0:
        print("INVALID")
        sys.exit(0)

    length = 0
    numList = [int(y) for y in copyNum]

    while length < len(numList):
        length += 1

    visa = int(copyNum[:1])
    amex = int(copyNum[:2])
    master = int(copyNum[:2])

    if (length == 13 or length == 16) and visa == 4:
        print("VISA")
        sys.exit(0)
    elif length == 15 and (amex == 34 or amex == 37):
        print("AMEX")
        sys.exit(0)
    elif length == 16 and master > 50 and master < 56:
        print("MASTERCARD")
        sys.exit(0)
    else:
        print("INVALID")
        sys.exit(0)
else:
    print("INVALID")
    sys.exit(0)


# def luhn_checksum(card_number):
#     def digits_of(n):
#         return [int(d) for d in str(n)]
#     digits = digits_of(card_number)
#     odd_digits = digits[-1::-2]
#     even_digits = digits[-2::-2]
#     checksum = 0
#     checksum += sum(odd_digits)
#     for d in even_digits:
#         checksum += sum(digits_of(d*2))
#     return checksum % 10

# print('Valid') if luhn_checksum("4532015112830366")==0 else print('Invalid')
