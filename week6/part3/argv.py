from sys import argv

if len(argv) == 2:
    print("hello, " + argv[1]) # print(f"hello, {argv[1]}")
else:
    print("hello, world")


# To print all arguments in the command line
"""
for arg in argv:
    print(arg)
"""
# To ignore filename and print the rest arguments
"""
for arg in argv:
    if arg != argv[0]:
        print(arg)
"""
# To ignore filename and print the rest arguments 2
# 1: means from 1 to the end of list
# -1: slices off and prints out the last argument
# :-1 slices off the last argument and prints the rest
"""
for arg in argv[1:]:
    print(arg)
"""
