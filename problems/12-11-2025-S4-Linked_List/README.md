#  Linked Lists LeetCode Study Session

[![Python3](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](https://www.python.org/)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![LeetCode](https://img.shields.io/badge/LeetCode-FFA116?style=for-the-badge&logo=leetcode&logoColor=white)](https://leetcode.com/)

[![Banner](/assets/GDG_Bristol_banner.png)](<chapter-link>)

Welcome to a LeetCode Study Session focused on **Linked Lists**,. we've included some notes to refer too, and some problems to solve.

---

- **Hosted by:** [GDG on Campus – University of Bristol](https://gdg.community.dev/gdg-on-campus-university-of-bristol-bristol-united-kingdom/)

---

## Learning Outcomes
By the end of this session, you will:
- Understand and implement Linked Lists.
- Recognize and apply patterns related to Linked Lists.
- Solve Problems related to Linked Lists.

---

## Introduction to Linked Lists

We begin with the concept of a **node**. A node can be thought of as an element with more information than just one piece of data like an integer or string.
- Nodes themselves are an abstract idea


> **Example**
> 
> You can think of an array element as a node holding the value and its index.
>
> For `[1, 2, 3]`, the second element looks like:
>
>
> ```text
> data: 2
> index: 1
> ```

Arrays are implemented under the hood in a way that elements are stored contiguously in memory.
- A linked list is similar to an array where data is stored in an ordered manner however it is implemented using node objects (you will define a custom class that defines this node object)
- Each node will have a `next` pointer which points to the node representing the next element within the sequence

---

Depending on the problem itself, you may have to add additional information to your implementation of a node

> **Example**
> 
> For a hash map implementation, if you wanted to avoid collisions by utilizing separate chaining, your node classes attributes would look something like
>
>
> ```text
> key
> value
> next
> ``````


![A Linked List visual representation](https://miro.medium.com/1*iiEWrP2IznA6HbmuIdK0lQ.png)

Below is some example code in some popular languages for creating a **singly linked list** to represent the data `1 --> 2 --> 3`

```python
# Python 
class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None
    
one = ListNode(1)
two = ListNode(2)
three = ListNode(3)
one.next = two
two.next = three
head = one

print(head.val)
print(head.next.val)
print(head.next.next.val)
```

```java
// Java
public class Example {
    public static class ListNode {
        int val;
        ListNode next;
        ListNode (int val) {
            this.val = val;
        }
    }
    
    public static void main(String[] args) {
        ListNode one = new ListNode(1);
        ListNode two = new ListNode(2);
        ListNode three = new ListNode(3);
        one.next = two;
        two.next = three;
        ListNode head = one;
        
        System.out.println(head.val);
        System.out.println(head.next.val);
        System.out.println(head.next.next.val);
    }
}
```


```cpp
// C++, note can also be done with a class
struct LinkedListNode {
    int val;
    LinkedListNode *next;
    LinkedListNode(int val): val (val), next(nullptr) {}
};

int main() {
    LinkedListNode* one = new LinkedListNode(1);
    LinkedListNode* two = new LinkedListNode(2);
    LinkedListNode* three = new LinkedListNode(3);
    one->next = two;
    two->next = three;
    LinkedListNode* head = one;
    
    std::cout << head->val << std::endl;
    std::cout << head->next->val << std::endl;
    std::cout << head->next->next->val << std::endl;

    return 0;
}
```

---

## Mechanics of a Linked List

Solving linked list problems and understanding how to manipulate linked list nodes  all revolves around manipulating pointers in code.
- The concept of handling pointers is fundamental for any programmer
- C and C++ have explicit pointers but in any language without them all user defined types (custom class objects) are treated as pointers

---

Assigning a pointer to an existing linked list node means the pointer refers to that object in memory

```cpp
// C++
ListNode* ptr = head;
head = head->next;
head = nullptr;
```
```java
// Java
ListNode* ptr = head;
head = head->next;
head = nullptr;
```

```python
# python
ptr = head
head = head.next
head = None
```

After all the lines `ptr` will still refer to the original `head`
- Variables remain at nodes unless they are modified directly `ptr = something` is the only way to modify `ptr`

---

> One thing to note is that `.next` can be chained so `head.next.next` as will refer to some node as long as it is not null

Traversing a linked list is also quite simple and can be done with both recursion and iteration.

```python
# python
def get_sum(head):
    ans = 0
    while head:
        ans += head.val
        head = head.next
    
    return ans

def get_sum_recursively(head):
    if not head:
        return 0
    
    return head.val + get_sum(head.next)
```

```Java
int getSum(ListNode head) {
    int ans = 0;
    while (head != null) {
        ans += head.val;
        head = head.next;
    }

    return ans;
}

int getSumRecursively(ListNode head) {
    if (head == null) {
        return 0;
    }

    return head.val + getSum(head.next);
}
```

```cpp
int getSum(ListNode* head) {
    int ans = 0;
    while (head != nullptr) {
        ans += head->val;
        head = head->next;
    }

    return ans;
}

int getSumRecursively(ListNode* head) {
    if (head == nullptr) {
        return 0;
    }

    return head->val + getSum(head->next);
}
```

For linked lists, it is best to use a `dummy` pointer to keep a reference to the head or the list you may end up wanting to return.
- This way you can traverse the linked list without losing your reference to the `head` within the linked list.

**Sentinal nodes** are nodes that sit at the start and end of linked lists and are used to make operations and the code needed to execute these operations much cleaner.
- The idea is even when there are no nodes in a linked list, you still keep pointers to a `head` (start of a linked list) and `tail` (end of a linked list)
- These nodes are not part of the list themselves

---



