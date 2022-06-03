# THE BELOW CODE ONLY WORKS ALONGSIDE A speller.py file whose path is root/src6/6/speller/speller.py

# Defining a Hash Table
# set() a data type in python takes care of duplicates
words = set()

# Checking every word in the dictionary
def check(word):
    if word.lower() in words:
        return True
    else:
        return False

# Loading the dictionary
def load(dictionary):               # Load dictionary
    file = open(dictionary, "r")    # Open the file, dictionary in read mode
    for line in file:               # Iterating over every line(word) in the file
        word = line.rstrip()        # rstrip strips off the the new line \n in every word
        words.add(word)             # Add the new word without \n to words (set covers us)
        file.close()                # Every opened file must be closed at the end
        return True                 # For success

# The size function takes no argument
# Returns the size of Hash table
def size():
    return len(words)

# No mallocing or freeing in Python
def unload():
    return True