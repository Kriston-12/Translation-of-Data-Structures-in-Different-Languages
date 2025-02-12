'''Below are three examples with ".sorted()", .sorted() will create a new array instead of modifying the original array in place.'''
# Example: Sorting a List of Tuples by the Second Element
data = [(1, 3), (2, 2), (3, 1)]
sorted_data = sorted(data, key=lambda x: x[1])
print(sorted_data)  # Output: [(3, 1), (2, 2), (1, 3)]

# Example: Sorting a List of Strings by Length
def compare_length(s):
    return len(s)
words = ["banana", "apple", "kiwi"]
sorted_words = sorted(words, key=compare_length)
# or just this sorted_words = sorted(words, key=lambda x: len(x))
print(sorted_words)  # Output: ['kiwi', 'apple', 'banana']


# Sorting by Multiple Criteria
# Example: Sorting Employees by Salary (Descending) and Name (Ascending)
employees = [("Alice", 50000), ("Bob", 70000), ("Charlie", 50000)]
sorted_employees = sorted(employees, key=lambda x: (-x[1], x[0]))
print(sorted_employees)  
# Output: [('Bob', 70000), ('Alice', 50000), ('Charlie', 50000)]


'''Using .sort() with key in Python. .sort() modifies arrays in place'''
data = [(1, 3), (2, 2), (3, 1)]
data.sort(key=lambda x: x[1])
print(data)  # Output: [(3, 1), (2, 2), (1, 3)]
