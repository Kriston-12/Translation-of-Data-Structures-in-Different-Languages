# Map is called dictionary in python
dictionary = {}

# Insertion
dictionary[key] = value

# Access
value = dictionary[key]

# Check key exists
if key in dictionary:
  pass

# Checking for Value: 
if value in map.values():.

# Iteration
for key, value in dictionary.items():
  print(key, value)

# Remove key-value pairs
del dictionary[key]

# Increment the value and update the dictionary
dictionary[key] = dictionary.get(key, 0) + 1
# Another way to increment the value
if key in dictionary:
  dictionary[key] += 1
else:
  dictionary[key] = 1
