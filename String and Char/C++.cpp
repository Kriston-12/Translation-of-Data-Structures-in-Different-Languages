#include <iostream>
#include <string>

// Creating strings
std::string str1 = "Hello, World!";
std::string str2("C++");

// Creating char
char letter = 'A';

// String length
int length = str1.length(); // 13

// Substring
std::string substring = str1.substr(0, 5); // "Hello"

// Comparison
bool isEqual = str1 == str2; // false
bool contains = str1.find("World") != std::string::npos; // true

// String to char array
const char* charArray = str1.c_str();

// Char to string
std::string charToString(1, letter);  
// The constructor being used takes two arguments: the first argument is the number of times the second argument (letter) should be repeated in the string.

// Access
std::string str = "Hello, World!";
char firstChar = str[0];  // 'H'
std::string substring = str.substr(7, 5);  // "World"

// Search
size_t indexOfComma = str.find(",");  // 5
bool containsWorld = str.find("World") != std::string::npos;  // true

// Add/Concatenate
std::string newString = str + " How are you?";  // "Hello, World! How are you?"

// Remove (Strings are mutable in C++)
str.erase(12);  // Remove characters starting from index 12

// Pop out the last element of a string
std::string st = "aaabb"
st.pop_back(); // st now is aaab
