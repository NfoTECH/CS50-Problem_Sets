from sys import argv, exit

if len(argv) != 2:
    print("Missing command-line argument")
    exit(1)               # Like return 1 for unsuccessful in C

print(f"Hello, {argv[1]}")
exit(0)                   # Like return 0 for success in C



# When importing te entire sys and not the specifics
"""
import sys

if len(sys.argv) != 2:
    print("Missing Command-Line Argument")
    sys.exit(1)

print(f"Hello, {sys.argv[1]}")
sys.exit(0)
"""