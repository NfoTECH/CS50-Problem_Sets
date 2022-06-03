
def within_unique_range(array_of_numbers, lower_range, upper_range):

    unique_set = list(set(array_of_numbers))
    result = []
    for num in unique_set:
        if num > lower_range and num < upper_range:
            result.append(num)
    return result

print(within_unique_range([4,6,2,6,7,7], 2, 7))