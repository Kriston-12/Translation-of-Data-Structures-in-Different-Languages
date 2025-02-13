# Python uses min-heap as default
import heapq

# Initialize an empty heap, it is of type list
heap = []

# Use heapq.heappush(array, element) to push an element into the array/heap. Python will automatically do heapify for us to maintain the min-heap property
heapq.heappush(heap, 5)
heapq.heappush(heap, 1)
heapq.heappush(heap, 3)

print("Min-heap", heap) # Output: [1, 5, 3] (Heap property is maintained internally)

# Pop the smallest element
smallest = heapq.heappop(heap)
print("Smallest element:", smallest)  # Output: 1. Now we have [5, 3] in our heap

# Peek at the smallest element without removing it
print("Current smallest element:", heap[0])  # Output: 3


'''If we want to use a max-heap, we could simulate it like below'''
heap = []
heapq.heappush(heap, -10)
heapq.heappush(heap, -1)
heapq.heappush(heap, -7)

# Convert back to positive values to see the max-heap behavior
print("Max-Heap:", [-x for x in heap])  # Output: [10, 1, 7]

# Pop the largest element
largest = -heapq.heappop(heap)
print("Largest element:", largest)  # Output: 10

'''Get n Smallest or Largest Elements'''
numbers = [10, 50, 20, 5, 30]
print("2 Smallest:", heapq.nsmallest(2, numbers))  # Output: [5, 10]
print("2 Largest:", heapq.nlargest(2, numbers))  # Output: [50, 30]


'''When Do You Need to Call heapify()?'''
# You only need to call heapq.heapify() when you start with an existing list and want to turn it into a heap in one step instead of inserting elements one by one.
nums = [4, 7, 2, 9, 1, 5]
heapq.heapify(nums)
print("Heapified list:", nums)  # Output: [1, 4, 2, 9, 7, 5] (Heap property maintained). This aranges the list in O(n), instead of inserting each element individually (which would take O(nlogn))
