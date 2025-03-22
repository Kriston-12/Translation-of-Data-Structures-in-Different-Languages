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


// About queue.emplace and queue.push
//
// In the code below, we demonstrate the behavioral difference between std::queue::push() and std::queue::emplace().
//
// The line:
//     q.push(MyString("abc"));
// constructs a temporary MyString object (an rvalue), then moves it into the queue.
// Therefore, it invokes the constructor from std::string, followed by the move constructor.
//
// In contrast, the line:
//     q.emplace("def");
// forwards the constructor arguments directly to the internal storage of the queue (in-place construction).
// Here, "def" is a const char* literal, which is implicitly converted to std::string,
// and then passed to MyString’s constructor from std::string.
//
// Since no MyString temporary is created beforehand, the move constructor is not invoked.
// Only the target constructor is called once — this is the key advantage of emplace over push.
//
// It's important to note:
// If we write:
//     std::string s = "abc";
//     q.push(s);     // s is an lvalue — invokes the copy constructor
//     q.emplace(s);  // same behavior — also invokes the copy constructor
//
// In such cases, both push() and emplace() behave identically because the argument is already a fully constructed object.
//
// Summary:
// - emplace() avoids temporary object construction when arguments can be forwarded to a constructor.
// - push() always requires a fully constructed object (copy or move occurs).
// - When passing an existing object (lvalue or rvalue), push() and emplace() perform the same.
// - emplace() shows its advantage only when passing constructor arguments directly.
