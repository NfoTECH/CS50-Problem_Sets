# EXCEPTIONS were made for invalid inputs using TRY and EXCEPT

try:
    x = int(input("x: "))               # cast an int to convert input string to int
except ValueError:
    print("Invalid input. Try again")
    exit()
try:
    y = int(input("y: "))               # without casting an int, 3 + 4 = 34 as string
except ValueError:
    print("Invalid input. Try again")
    exit()

print(x + y)


# Using the cs50 get_int function
"""
from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")
printf(x + y)
"""