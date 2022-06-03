from cs50 import get_int

while True:
    n = get_int("Height: ")
    if 0 < n < 9:
        break

for i in range(n):
    for j in range(n + i + 3):
        if i + j < n - 1 or j == n or j == n + 1:
            print(" ", end="")
        else:
            print("#", end="")
    print()

# FOR INVERTED MARIOMORE
# for i in range(n-1, -1, -1):