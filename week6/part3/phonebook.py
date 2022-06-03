from cs50 import get_string

people = {
     "David" : "+1-949-468-2750",
     "Fortune" : "+234-703-499-9322"
}

name = get_string("Name: ")
if name in people:
    number = people[name]
    print(f"Number: {number}")