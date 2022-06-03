from cs50 import get_int

# do-while loop is absent in Python.
# However(while True - if) loop does the job. Always break after
while True:
    n = get_int("Height: ")
    if n > 0:
        break

for i in range(n):
    print("#")