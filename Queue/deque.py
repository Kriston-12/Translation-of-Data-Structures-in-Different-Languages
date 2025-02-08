# deque
from collections import deque

# Create an empty deque
d = deque()

# Create a deque with initial elements
d = deque([1, 2, 3])

# Append to the right (end) O(1)
d.append(4)  # deque([1, 2, 3, 4])

# Append to the left (start) O(1)
d.appendleft(0)  # deque([0, 1, 2, 3, 4])

# Remove and return an element from the right (end) O(1)
d.pop()  # Returns 4, deque([0, 1, 2, 3])

# Remove and return an element from the left (start) O(1)
d.popleft()  # Returns 0, deque([1, 2, 3])

# Remove an element from the deque O(n) 
d.remove(2) # deque([1, 3])

# Modify an element by accessing it directly (indexing is supported) O(1)
d[1] = 10  # deque([1, 10])

# Check if an element exists O(n)
exists = 10 in d  # True

# Get the index of an element O(n)
index = d.index(10)  # 1
