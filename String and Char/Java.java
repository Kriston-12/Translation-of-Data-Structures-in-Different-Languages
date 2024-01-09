// Strings are immutable in java
// StringBuilder and StringBuffer are mutable

// Creating strings
String str1 = "Hello, World!";
String str2 = new String("Java");

// Creating char
char letter = 'A';

// String length
int length = str1.length(); // 13

// Accessing characters
char firstChar = str1.charAt(0); // 'H'

// Concatenation
String combined = str1 + str2; // "Hello, World!Java", combined is a new-created string. When you change a string, you usually create a string instead of modifying a string

// Substring
String substring = str1.substring(0, 5); // "Hello"

// Comparison
boolean isEqual = str1.equals(str2); // false
boolean contains = str1.contains("World"); // true

// String to char array
char[] charArray = str1.toCharArray();

// Char to string
String charToString = Character.toString(letter);

// Access
String str = "Hello, World!";
char firstChar = str.charAt(0); // 'H'
String substring = str.substring(7, 12); // "World"

// Search
int indexOfComma = str.indexOf(","); // 5
boolean containsWorld = str.contains("World"); // true

// Add/Concatenate
String newString = str.concat(" How are you?"); // "Hello, World! How are you?"

// Remove (Strings are immutable in Java)
String removedExclamation = str.replace("!", ""); // "Hello, World"



// StringBuffer and StringBuilder
// StringBuffer is synchronized, which means it is designed to be used in multi-threaded environments where multiple threads may access and modify the same StringBuffer concurrently.
// Synchronization adds some overhead, making StringBuffer slightly slower than StringBuilder.
// Use StringBuffer when you need thread safety and multiple threads will modify the same string concurrently.
StringBuffer stringBuffer = new StringBuffer();
stringBuffer.append("Hello");
stringBuffer.append(", ");
stringBuffer.append("World!");

String result = stringBuffer.toString();


// StringBuilder:
// StringBuilder is not synchronized, which means it is not thread-safe. However, it is faster and more efficient than StringBuffer due to the absence of synchronization overhead.
// Use StringBuilder when you don't need thread safety or when you're working in a single-threaded environment.
StringBuilder stringBuilder = new StringBuilder();
stringBuilder.append("Hello");
stringBuilder.append(", ");
stringBuilder.append("World!");

String result = stringBuilder.toString();

