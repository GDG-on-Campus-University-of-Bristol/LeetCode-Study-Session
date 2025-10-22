## 1) Introduction to **Stacks**

**Idea:** Last-In-First-Out.  

A **stack** is an ordered collection of elements where elements are only added and removed from the **same end**. 

- A real world example of a stack can be a stack of plates in the kitchen, plates are added and removed from the top of the pile.
- A good software example of a stack is the undo button on your document editor each operation performed is added to the top of the stack and when the undo button is pressed is then removed from the stack.

A stack is described as a **LIFO** (Last In First Out) data structure.
- The last element placed inside is the first element to come out.

Implementation wise stacks are very simple to implement and the time complexities of the operations are dependent on the implementation.
- Java, C++ and some other languages have built-in stacks
- Python you simply just use a list
- **For languages with mutable strings i.e C++ you could use an empty string as a stack**.

Stacks have four main operations:
- push: Add an element to the end of the stack.
- pop: Remove an element from the end of the stack.
- peek: View the element at the top of the stack.
- empty: Check if the stack is empty.

<p align="center">
  <img src="https://logicmojo.com/assets/dist/new_pages/images/stack-in-data-structure.webp"
       alt="Stack in data structure" width="600">
</p>

![Stack in data structure](https://logicmojo.com/assets/dist/new_pages/images/stack-in-data-structure.webp)



As far as time complexities go if a stack is implemented via a dynamic array which is the most common then you have O(1) push, pop and random access with O(n) search.
- Sometimes a stack may be implemented with a linked list with a tail pointer.

We are essentially saying a stack is just an abstract interface since it only really is just an added characteristic.
- This characteristic however is what makes the stack so useful.


A good rule of thumb for solving a problem that requires a stack is when you recognize the LIFO pattern.
- Usually, there will be some part of the problem that involves elements in the input interacting with each other
    - Examples include "How far is the next largest element"



```cpp
// Declaration: C++ supports multiple implementations, but we will be using
// std::stack. Specify the data type
std::stack<int> stack;

// Pushing elements:
stack.push(1);
stack.push(2);
stack.push(3);

// Popping elements:
// Note, unlike other languages, popping here does not return the popped value
stack.pop();
stack.pop();

// Check if empty
stack.empty(); // false

// Check element at top
stack.top(); // 1

// Get size
stack.size(); // 1

```

```python
# Declaration: we will just use a list
stack = []

# Pushing elements:
stack.append(1)
stack.append(2)
stack.append(3)

# Popping elements:
stack.pop() # 3
stack.pop() # 2

# Check if empty
not stack # False

# Check element at top
stack[-1] # 1

# Get size
len(stack) # 1

```