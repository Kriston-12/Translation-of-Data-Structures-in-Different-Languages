# Similar to Strings in java, string in python is also immutable. When you change a string, you are creating a new changed string

# Creating strings
str1 = "Hello, World!"
str2 = 'Python'

# Creating char
letter = 'A'

# String length
length = len(str1) # 13

# Accessing characters
firstChar = str1[0] # 'H'

# Concatenation
combined = str1 + str2 # "Hello, World!Python"

# Substring
substring = str1[0:5] # "Hello"

# Comparison
isEqual = str1 == str2 # False
contains = "World" in str1 # True

# String to char list
charList = list(str1)

# Char to string
charToString = str(letter)

# Access
str = "Hello, World!"
firstChar = str[0]  # 'H'
substring = str[7:12]  # "World"   O(n)

# Search
indexOfComma = str.find(",")  # 5    O(n)
containsWorld = "World" in str  # True

# Add/Concatenate
newString = str + " How are you?"  # "Hello, World! How are you?"

# Remove (Strings are immutable in Python)
removedExclamation = str.replace("!", "")  # "Hello, World"
