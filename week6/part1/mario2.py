# For overriding  new line, ie printing in the same line
# You can end with an empty string or space
"""
for i in range(4):
    print("?", end="-")
print()
"""
# The above prints ?-?-?-?-


# Below is a 4 x 8 hash brick(row x column)
for i in range(4):
    for j in range(8):
        print("#", end="")
    print()

# For a simple SQUARE brick; 4x4 brick below
"""
for i in range(4):
    print("#" * 4)
"""