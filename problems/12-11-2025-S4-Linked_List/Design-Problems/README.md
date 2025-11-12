## Types of Linked Lists

For Design problems, it is best to know the two different types of linked lists since a linked list is an important data structure that can be used when solving these problems.
- What we mean here is knowing how to add, remove from anywhere on the list under the hood is important
- Also a lot of languages have built in linked list implementations so knowing what happens is useful
---

### Singly Linked Lists

This is the most common and the one you will have already seen from the main README.
- In a singly linked list, each node only has a pointer to the `next` node essentially meaning you can only move forward.
- The name for this node is usually `next`

If you want to add an element (node call it `x`) to a singly linked list at some arbitrary position `i`, you need a pointer to the element at position `i - 1`.
- The next element (call it`y`) will be pushed to the element at position `i + 1`
- So `y` becomes the next node to `x` and `x` becomes the next node to our element at position `i - 1`

```python
# Python
class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None

# Let prev_node be the node at position i - 1
def add_node(prev_node, node_to_add):
    node_to_add.next = prev_node.next
    prev_node.next = node_to_add
```

```Java
// Java
class ListNode {
    int val;
    ListNode next;
    ListNode (int val) {
        this.val = val;
    }
}

// Let prevNode be the node at position i - 1
void addNode(ListNode prevNode, ListNode nodeToAdd) {
    nodeToAdd.next = prevNode.next;
    prevNode.next = nodeToAdd;
}
```

```cpp
// C++
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

// Let prevNode be the node at position i - 1
void addNode(ListNode* prevNode, ListNode* nodeToAdd) {
    nodeToAdd->next = prevNode->next;
    prevNode->next = nodeToAdd;
}
```

> Typically, it is unusual to have a pointer to a node at position `i` and typically you will probably be doing a search but if you do have the pointer, it will be an `O(1)` addition

To remove an element (call it `x`) at position `i` we will again need a reference to the node at position `i - 1` and the element at position `i + 1` call it `y` will be the next node to our element at position `i - 1`.

```cpp
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

// Let prevNode be the node at position i - 1
void deleteNode(ListNode* prevNode) {
    prevNode->next = prevNode->next->next;
}
```

```Java
class ListNode {
    int val;
    ListNode next;
    ListNode (int val) {
        this.val = val;
    }
}

// Let prevNode be the node at position i - 1
void deleteNode(ListNode prevNode) {
    prevNode.next = prevNode.next.next;
}
```

```python
class ListNode {
    int val;
    ListNode next;
    ListNode (int val) {
        this.val = val;
    }
}

// Let prevNode be the node at position i - 1
void deleteNode(ListNode prevNode) {
    prevNode.next = prevNode.next.next;
}
```

`prevNode.next` is the node being deleted `prevNode.next.next` is the node after that which should be kept.
- Because the node being deleted could only have been reached from `prevNode` and we have severed that connection, it is no longer part of the list

Just like insertion, if you already have that reference, removal is simply `O(1)` otherwise it is `O(n)` to search the list


---
### Doubly Linked Lists

A doubly linked list is like a singly linked list but each node also contains a pointer to the previous node allowing for a two way connection.
- This node is typically called `prev` and it allows iteration in both directions

Having `prev` also means we do not need a reference to the node before a node for removal or insertion but we only need that node specifically.
- We just have to do some extra work to update the `prev` pointers

![A Linked List visual representation](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png)

```python
# Python
class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None
        self.prev = None

# Let node be the node at position i
def add_node(node, node_to_add):
    prev_node = node.prev
    node_to_add.next = node
    node_to_add.prev = prev_node
    prev_node.next = node_to_add
    node.prev = node_to_add

# Let node be the node at position i
def delete_node(node):
    prev_node = node.prev
    next_node = node.next
    prev_node.next = next_node
    next_node.prev = prev_node
```

```Java
// Java
class ListNode {
    int val;
    ListNode next;
    ListNode prev;
    ListNode (int val) {
        this.val = val;
    }
}

void addNode(ListNode node, ListNode nodeToAdd) {
    ListNode prevNode = node.prev;
    nodeToAdd.next = node;
    nodeToAdd.prev = prevNode;
    prevNode.next = nodeToAdd;
    node.prev = nodeToAdd;
}

void deleteNode(ListNode node) {
    ListNode prevNode = node.prev;
    ListNode nextNode = node.next;
    prevNode.next = nextNode;
    nextNode.prev = prevNode;
}
```

```cpp
// C++
struct ListNode {
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int val) : val(val), next(nullptr), prev(nullptr) {}
};

// Let node be the node at position i
void addNode(ListNode* node, ListNode* nodeToAdd) {
    ListNode* prevNode = node->prev;
    nodeToAdd->next = node;
    nodeToAdd->prev = prevNode;
    prevNode->next = nodeToAdd;
    node->prev = nodeToAdd;
}

void deleteNode(ListNode* node) {
    ListNode* prevNode = node->prev;
    ListNode* nextNode = node->next;
    prevNode->next = nextNode;
    nextNode->prev = prevNode;
}
```

