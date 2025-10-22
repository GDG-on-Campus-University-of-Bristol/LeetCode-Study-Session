## 1) Introduction to **Queues**

**Idea:** First in First Out.  

Problems requiring just queues are quite rare in LeetCode.

A Queue follows a FIFO structure, elements are added and removed from opposite ends.
- Imagine a line at a fast food restaurant


Queues are trickier implementation wise but one way would be a doubly linked list. You could also use a dynamic array but operations at the front of the array will be taxing.

Alongside checking empty a queue has two main operations.
- Adding to a queue is called **enqueue**
- Removing from a queue is called **deque**

There is also a data structure called a **deque** short for double ended queue.
- Here you can add or delete elements from both ends

A common use case for queues is BFS (Breadth First Search)


```cpp
// Declaration: C++ supports multiple implementations, but we will be using
// std::queue. Specify the data type
queue<int> queue;

// Enqueueing/adding elements:
queue.push(1);
queue.push(2);
queue.push(3);

// Dequeing/removing elements:
queue.pop();

// Check if empty
queue.empty(); // false

// Check element at front of queue (next element to be removed)
queue.front(); // 2

// Get size
queue.size(); // 2
```

```python
# Declaration: we will use deque from the collections module
import collections
queue = collections.deque()

# If you want to initialize it with some initial values:
queue = collections.deque([1, 2, 3])

# Enqueueing/adding elements:
queue.append(4)
queue.append(5)

# Dequeuing/removing elements:
queue.popleft() # 1
queue.popleft() # 2

# Check element at front of queue (next element to be removed)
queue[0] # 3

# Get size
len(queue) # 3
```

