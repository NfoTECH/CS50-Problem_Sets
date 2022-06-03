def is_isogram(string):
    #your code here
    string = string.lower()
    for char in string:
        if string.count(char) > 1:
            return False
    return True


# SOLUTION2
def is_isogram(string):
    return len(set(string.lower())) == len(string)