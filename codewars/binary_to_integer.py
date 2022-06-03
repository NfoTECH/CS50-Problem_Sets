#Given an array of ones and zeroes, convert the equivalent binary value to an integer.
# Eg: [0, 0, 0, 1] is treated as 0001 which is the binary representation of 1.

def binary_array_to_number(arr):
    return int(''.join(str(i) for i in arr), 2)

# SOLUTION2
def binary_array_to_number(arr):
    return int("".join(map(str, arr)), 2)


# you could use int() to translate a binary string to a base 10 int?
# int(binary, 2) the 2 can be changed into any base number you want to translate,
# and the binary is the translated number.