import sys

names = ["Fortune", "Jennifer", "Ernest", "Emma", "Oluchi"]

if "Fortune" in names:
    print("Found")
    sys.exit(0)

print("Not found")
sys.exit(1)