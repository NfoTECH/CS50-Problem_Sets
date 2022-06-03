# Given a string of words, return the length of the shortest word(s).

# SHORTEST WORD
def find_short(s):
    return min(s.split(), key=len)
    # return min(x for x in s.split())

# LONGEST WORD
def find_long(s)
    return max(s.split(), key=len)
    # return max(x for x in s.split())

# LENGTH OF SHORTEST
def find_short_len(s)
    return len(min(s.split(), key=len))
    # return min(len(x) for x in s.split())

# LENGTH OF LONGEST
def find_long_len(s)
    return len(max(s.split(), key=len))
    # return max(len(x) for x in s.split())