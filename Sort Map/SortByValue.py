# Sample dictionary
my_dict = {'a': 3, 'b': 1, 'c': 2}

# Sorting by values
sorted_dict = dict(sorted(my_dict.items(), key=lambda item: item[1]))

print(sorted_dict)
