## Fast and Slow Pointers

Fast and slow pointers is an implementation of the two pointers technique that we learned from the arrays and hash maps sessions.

The idea is that we have two pointers that do not move side by side.
- This could mean that they move at different "speeds" during iteration, begin iteration from different locations or any other abstract different

When the pointers move the fast pointer usually moves two nodes per iteration whereas the slow pointer usually just moves one node per iteration.
- Remember this may not always be the case

```text
// head is the head node of a linked list
function fn(head):
    slow = head
    fast = head

    while fast and fast.next:
        Do something here
        slow = slow.next
        fast = fast.next.next
```

Above is some pseudocode that demonstrates the implementation of the pattern itself

> We check `fast.next` because if fast is at the final node then `fast.next` is null so you would get an error when trying to access `fast.next.next` i.e `null.next`

This approach in essence is not much faster than the brute force approach of simply converting the list into an array and then using that but within an interview, we would consider a solution like this to be not acceptable because it defeats the purpose of utilizing pointers.
- It isn't much faster however it is the elegant approach that interviewers are looking for and you won't need extra memory for the array.

