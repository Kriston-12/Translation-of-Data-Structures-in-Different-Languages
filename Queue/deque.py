# deque
from collections import deque

# Create an empty deque
d = deque()

# Create a deque with initial elements
d = deque([1, 2, 3])

# Append to the right (end)
d.append(4)  # deque([1, 2, 3, 4])

# Append to the left (start)
d.appendleft(0)  # deque([0, 1, 2, 3, 4])

# Remove and return an element from the right (end)
d.pop()  # Returns 4, deque([0, 1, 2, 3])

# Remove and return an element from the left (start)
d.popleft()  # Returns 0, deque([1, 2, 3])

# Modify an element by accessing it directly (indexing is supported)
d[1] = 10  # deque([1, 10, 3])

# Check if an element exists
exists = 10 in d  # True

# Get the index of an element
index = d.index(10)  # 1
