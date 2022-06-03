# Given an array of integers, find the one that appears an odd number of times.
# [0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
#  [1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).


def find_it(seq):
    count = 0
    for i in range(len(seq)):
        for j in range(len(seq)):
            if seq[i] == seq[j]:
                count += 1
        if not count % 2 == 0:
            return seq[i]

# SOLUTION2

def find_it(seq):
    for elem in set(seq):
        if seq.count(elem) % 2 == 1:
            return elem

# SOLTION3

def find_it(seq):
    for i in seq:
        if seq.count(i)%2 == 1:
            return i

# SOLUTION4

def find_it(seq):
    for i in seq:
        if seq.count(i)%2 != 0:
            return i

# SOLTION5
def find_it(seq):
    return [x for x in seq if seq.count(x) % 2][0]