import csv
from cs50 import get_string

name = get_string("Name: ")
number = get_string("Number: ")

with open("phonebook.csv", "a") as file:   # a for appending
                                    #csv: comma seperated values
    writer = csv.writer(file)
    writer.writerow([name, number])



# Without the "with" and "as" keyword, you close() the file
"""
file = open("phonebook.csv", "a")
name = get_string("Name: ")
number = get_string("Number: ")

writer = csv.writer(file)
writer.writerow([name, number])

file.close()
"""