while True:
    n = int(input("Height: "))
    if 0 < n < 9:
        break

for i in range(n):
    for j in range(n):
        if i + j < n - 1:
            print(" ", end="")
        else:
            print("#", end="")
    print()

# FOR REVERSE MARIOLESS
# for i in range(n-1, -1, -1):

# TO TEST THE RANGE FUNCTION
# lst = list(range(11))
# print(lst)