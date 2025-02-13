// C++ use std::priority_queue as a max-heap. 
#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq; // Max-heap by default
  
    pq.push(10);
    pq.push(1);
    pq.push(5);
    std::cout << "Top element (max-heap): " << pq.top() << std::endl; // Output: 10
  
    pq.pop(); // Removes 10, the next largest (5) moves to the top
    std::cout << "Next top element: " << pq.top() << std::endl; // Output: 5
  
    return 0;
}

#include <vector> // I put #include <vector> here bc I only used std::vector in the test and test1 function below
/// Creating a Min-Heap with std::priority_queue
int test() {
    // Here we use std::greater<int> as a comparator to prioritize the smaller element
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // Min-heap

    pq.push(10);
    pq.push(1);
    pq.push(5);

    std::cout << "Top element (min-heap): " << pq.top() << std::endl; // Output: 1

    pq.pop(); // Removes 1, the next smallest (5) moves to the top
    std::cout << "Next top element: " << pq.top() << std::endl; // Output: 5

    return 0;
}


// Manually Managing a Heap with std::vector (Requires Heap Functions), we usually don't make heap like this
#include <algorithm>  // std::make_heap(), std::push_heap(), std::pop_heap() is from <algorithm>
// make_heap() initializes the heap.
// push_heap() is needed after adding an element to maintain the heap property.
// pop_heap() moves the largest element to the end, but does not remove it, so we use pop_back().
int test1() {
    std::vector<int> heap = {10, 1, 5}; 

    std::make_heap(heap.begin(), heap.end()); // Convert vector into a max-heap

    heap.push_back(7); 
    std::push_heap(heap.begin(), heap.end()); // Maintain heap after adding 7

    std::cout << "Top element: " << heap.front() << std::endl; // Output: 10 (max-heap)

    std::pop_heap(heap.begin(), heap.end()); // Moves max element to end
    heap.pop_back(); // Remove max element

    std::cout << "New top element: " << heap.front() << std::endl; // Output: 7

    return 0;
}
