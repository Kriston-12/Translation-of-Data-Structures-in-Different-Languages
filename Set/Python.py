# Assuming ValueType is a type or class

# Creation
my_set = set()

# Insertion
my_set.add(value)

# Search
if value in my_set:
    # Value found

# Deletion
my_set.remove(value)  # Raises KeyError if not present
my_set.discard(value) # Does not raise an error if not present

# Size
num_elements = len(my_set)

# Iterate
for element in my_set:
    # Process element
