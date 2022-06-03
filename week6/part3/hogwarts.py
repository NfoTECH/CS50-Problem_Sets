import csv   # A response downloaded from a google form. Not available here

houses = {
    "Gryffindor": 0,
    "Hufflepuff": 0,
    "Ravenclaw": 0,
    "Slytherin": 0
}

with open("hogwarts.csv", "r") as file:
    reader = csv.reader(file)
    next(reader)                    # Ignors the first line and starts from line 2
                                    # Because the first line of our csv file is just heading
                                    # The name list with response time starts from line 2
    for row in reader:
        house = row[1]
# Example of responses in the csv file: 10/13/2021 14:32:13,Gryffindor
# row[1] is to target only Gryffindor(the response) as row[0] targets the timestamp
        houses[house] += 1          # This increments any of the choice house by 1

for house in houses:
    count = houses[house]
    print(f"{house}: {count}")



# Lines 11 to 19 can be rewritten dynamically to ignore the target row[1] using DictReader
"""
reader = csv.DictReader(file)
for row in reader:
    house = row["House"]
    houses[house] += 1
"""
# House in line 31 is representing House in the csv file first line labeled: Timestamp,House