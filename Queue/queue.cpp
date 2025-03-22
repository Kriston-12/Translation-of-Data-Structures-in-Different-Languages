#include <iostream>
#include <queue>
#include <vector>

int main() {
    // 1. Declare an empty queue of integers
    std::queue<int> q1;

    // Initialize a queue from a vector (requires manual copying)
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::queue<int> q2; // cannot directly initialize queue from vector

    // Copy elements from vector to queue (FIFO)
    for (int val : vec) {
        q2.push(val);
    }

    // 2. queue.push(x). If we have a non basic type element to push, for example, a string, we could use q1.emplace(std::string("aabbcc"))； to avoid 
    q1.push(10);
    q1.push(20);
    q1.push(30);

    // 3. queue.front()
    // Access the front element (does not remove it)
    std::cout << "Front of q1: " << q1.front() << std::endl;  // 10

    // 4. queue.back()
    // Access the last (back) element
    std::cout << "Back of q1: " << q1.back() << std::endl;    // 30

    // 5. queue.pop()
    // Remove the front element (does NOT return it)
    q1.pop();  // removes 10

    std::cout << "After pop, new front: " << q1.front() << std::endl; // 20

    // 6. queue.size()
    // Get the number of elements in the queue
    std::cout << "Size of q1: " << q1.size() << std::endl;

    // 7. queue.empty()
    // Check if the queue is empty
    if (q1.empty()) {
        std::cout << "q1 is empty!" << std::endl;
    } else {
        std::cout << "q1 is NOT empty." << std::endl;
    }

    // 8. Traversing a queue (destructively)
    std::cout << "Elements in q2 (copied from vector): ";
    while (!q2.empty()) {
        std::cout << q2.front() << " ";
        q2.pop();  // removes elements
    }
    std::cout << std::endl;

    return 0;
}


// About queue.emplace and q.push
// #include <iostream>
// #include <queue>
// #include <string>

// struct MyString {
//     std::string data;

//     // Default constructor
//     MyString() {
//         std::cout << "Default constructor\n";
//     }

//     // Constructor from const char*
//     MyString(const std::string s) : data(s) {
//         std::cout << "Constructor from std::string\n";
//     }

//     // Copy constructor
//     MyString(const MyString& other) : data(other.data) {
//         std::cout << "Copy constructor\n";
//     }

//     // Move constructor
//     MyString(MyString&& other) noexcept : data(std::move(other.data)) {
//         std::cout << "Move constructor\n";
//     }
// };

// int main() {
//     std::queue<MyString> q;

//     std::cout << "--- push(std::string(\"abc\")) ---\n";
//     q.push(MyString("abc"));  // temporary created, then moved into queue

//     std::cout << "--- emplace(\"def\") ---\n";
//     q.emplace("def");  // in-place constructor, no temporary object

//     return 0;
// }


// This is the output, we see emplace does not call our move constructor. and bc "def" is a rvalue, push will call shift constructor instead of copy constructor.
// If we do std::string s("abc"); queue.push(s) then we will see Copy constructor as s is an instantiated object/string, it is lvalue.
// --- push(std::string("abc")) ---
// Constructor from std::string
// Move constructor

// --- emplace("def") ---
// Constructor from std::string

