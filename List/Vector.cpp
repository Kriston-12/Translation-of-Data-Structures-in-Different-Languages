#include <vector>
// add
std::vector<int> vec;
vec.push_back(5); // Adds 5 to the end of the vector

// remove
std::vector<int> vec;
vec.erase(vec.begin() + 2); // Removes the element at index 2

// search
#include <algorithm>
std::vector<int> vec;
auto it = std::find(vec.begin(), vec.end(), 5); // Returns an iterator to the element with value 5

// access
std::vector<int> vec;
int element = vec[2]; // Gets the element at index 2

// change elements 
std::vector<int> vec;
vec[2] = 10; // Sets the element at index 2 to 10
