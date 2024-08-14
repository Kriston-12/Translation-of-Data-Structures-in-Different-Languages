# The Queue class from the queue module is a thread-safe implementation for FIFO (First In, First Out) queues, commonly used in multithreading.
from queue import Queue

# Create an empty queue
q = Queue()

# Create a queue with a maximum size
q = Queue(maxsize=10)

# Add an element to the queue (put method blocks if the queue is full)
q.put(1)
q.put(2)
q.put(3)

'''Unlike deque, direct modification of elements is not supported in Queue. 
If you need to modify elements, you would typically need to dequeue all elements, 
modify the necessary one(s), and then re-enqueue them.'''

'''
Queue does not directly support searching for an element. 
You would need to dequeue elements until you find the one you are looking for, 
then put the elements back into the queue.'''

size = q.qsize()  # Returns the current size of the queue
