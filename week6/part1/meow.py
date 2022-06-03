def main():
    for i in range(3):
        meow()

def meow():
    print("meow")

main()

#-----------------------------------------------------------
# The above could be rewritten like this
# def main():
#     meow(3)

# def meow(n):
#     for i in range(n):7
#         print("meow")

# main()

#------------------------------------------------------------
# The above code could be written in just these 2 lines below
# for i in range(3):
#     print("meow")