import sys

# TO SEARCH FOR A NUMBER IN AN ARRAY. NO LOOPS. POWERFUL RIGHT?
numbers = [4, 8, 2, 7, 5, 0]

if 0 in numbers:
    print("Found")
    sys.exit(0)                 #sys.exit(0) for success

print("Not found")
sys.exit(1)                     #exit(1) for unsuccessful

