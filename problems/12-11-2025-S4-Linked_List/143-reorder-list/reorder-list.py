# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        slow = head
        fast = head.next

        # find the middle split it into two list
        # slow is the middle element
        # fast is in last element
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        # reverse the link in the right half list
        curr = slow.next
        prev = None
        slow.next = None
        while curr:
            nxt = curr.next
            curr.next = prev
            
            prev = curr
            curr = nxt

        # add left then right
        while prev:
            tmp1, tmp2 = head.next, prev.next
            head.next = prev
            prev.next = tmp1 

            head = tmp1
            prev = tmp2
