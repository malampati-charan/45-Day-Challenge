class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        ListNode* temp = head;

        while (temp != nullptr) {
            if (temp->next != nullptr && temp->next->val == temp->val) {
                int val = temp->val;

                while (temp != nullptr && temp->val == val) {
                    temp = temp->next;
                }
            } else {
                current->next = temp;
                current = current->next;
                temp = temp->next;
            }
        }

        current->next = nullptr;

        return dummy->next;
    }
};
