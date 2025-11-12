class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr) return;
        // find the middle of linked list [Problem 876]
        // in 1->2->3->4->5->6 find 4
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // reverse the second part of the list [Problem 206]
        // convert 1->2->3->4->5->6 into 1->2->3->4 and 6->5->4
        // reverse the second half in-place
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        ListNode* tmp;
        while (curr != nullptr) {
            tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        // merge two sorted linked lists [Problem 21]
        // merge 1->2->3->4 and 6->5->4 into 1->6->2->5->3->4
        ListNode* first = head;
        ListNode* second = prev;
        while (second->next != nullptr) {
            tmp = first->next;
            first->next = second;
            first = tmp;
            tmp = second->next;
            second->next = first;
            second = tmp;
        }
    }
};