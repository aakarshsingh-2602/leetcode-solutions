/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k <= 1) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* groupPrev = &dummy;

        while (true) {
            // Check if there are at least k nodes remaining
            ListNode* kth = groupPrev;
            for (int i = 0; i < k && kth != nullptr; ++i) {
                kth = kth->next;
            }
            if (!kth) break; // Fewer than k nodes remain

            ListNode* groupNext = kth->next;

            // Reverse k nodes between groupPrev and groupNext
            ListNode* prev = groupNext;
            ListNode* curr = groupPrev->next;
            while (curr != groupNext) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            // Reconnect the reversed group to the previous portion
            ListNode* temp = groupPrev->next; // Old head, now the tail of this group
            groupPrev->next = kth;            // New head of this group
            groupPrev = temp;                 // Move groupPrev to the end of the reversed group
        }

        return dummy.next;
    }
};