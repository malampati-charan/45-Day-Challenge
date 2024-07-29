class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(200);
        ListNode* temp = head -> next;
        dummy -> next = head;
        ListNode* current = dummy;
        current = current -> next;

        while (temp != nullptr) {
            if (current -> val != temp -> val) {
                current = temp;
                current = current -> next;
                temp = temp -> next;
            } else {
                temp = temp -> next;
            }
        }

        return dummy -> next;
    }
};