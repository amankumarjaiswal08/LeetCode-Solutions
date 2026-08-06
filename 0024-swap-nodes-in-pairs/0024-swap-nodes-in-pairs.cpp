class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;

        while (curr->next != nullptr && curr->next->next != nullptr) {
            ListNode* s1 = curr->next;
            ListNode* s2 = curr->next->next;

            s1->next = s2->next;
            s2->next = s1;
            curr->next = s2;

            curr = s1;
        }
        return dummy->next;
    }
};