def main():
    h = get_height()
    for i in range(h):
        print("#")

# Use (while True - if) in place of do-while and break
# Without cs50 library, try and except when prompting
def get_height():
    while True:
        try:
            n = int(input("Height: "))
            if n > 0:
                break
        except ValueError:
            print("Invalid Input. Try again")
    return n

main()
