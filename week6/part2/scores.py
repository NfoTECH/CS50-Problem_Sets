from cs50 import get_int

scores = []
for i in range(3):
    score = get_int("Score: ")
    scores.append(score)    # OR  scores += [score]
# append() above is for concatenating linked lists or arrays
# sum() below is a fuction that adds all element in the array
# len() is a function that determines the length of the array
average = sum(scores) / len(scores)
print(f"Average = {average}")