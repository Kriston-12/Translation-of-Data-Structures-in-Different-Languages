#include <vector>
// vector initialization 
// 1. Most commen one
std::vector<int> v1; // empty vector, size = 0

// 2. Initialize with size of x=5. std::vector<type> vectorName(x)
std::vector<int> v2(5); // {0, 0, 0, 0, 0} -- vector element is initialized with value=0 by default

// 3. Assigned size and values. std::vector<type> vectorName(size, defaultValue)
std::vector<int> v3(5, 100) // {100, 100, 100, 100, 100}
// We could also do (These two examples below are not as common as the one above)
std::vector<int> v3copy;
v3copy.assign(5, 100); 
// Or we could do std::fill(vector.begin(), vector.end(), value);
std::vector<int> v3copy1(5);
std::fill(v3copy1.begin(), v3copy1.end(), 100);


// 4. Use {}, this is suppported by C++11 and later
std::vector<int> v4 = {1, 2, 3, 4, 5}; // or
std::vector<int> v5{1, 2, 3, 4, 5} // this is equivalent to the above

// 5. Initialization by copying another vector
std::vector<int> v6 = v5; // This is calling std::vector(const std::vector&) not vector& operator=(const std::vector&) since we are constructor a new vector called v6
std::vector<int> v7(v6);  // This is equivalent to the above

// 6. Initialization by std::move
std::vector<int> v8 = std::move(v7); // v7 will be deleted and v8 will have what v7 had. This is like v7 is giving its soul and body to 8 and v7 itself dies. 

// 7. Initialization with copying part of an another vector
std::vector<int> v9(v4.begin(), v4.end() + 3); // This is copying the first three elements in v4. v9 = {1, 2, 3}

// 8. Use std::iota() to generate a ascending vector. This is very common
#include<numeric>
std::vector<int> v10(5);
std::iota(v10.begin(), v10.end(), 100) // v10 = {100, 101, 102, 103, 104};

  
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
