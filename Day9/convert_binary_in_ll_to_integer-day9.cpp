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
    int getDecimalValue(ListNode* head) {
        // First reverse a linked list
        head = reverseList(head);

        ListNode *temp = head;
        int i = 0;
        int returnable = 0;
        while (temp != nullptr) {
            returnable += temp -> val * pow(2, i++);
            temp = temp -> next;
        }

        return returnable;
    }

    ListNode* reverseList(ListNode* head) {
    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *next = nullptr;

    while (curr != nullptr) {
            next = curr->next; // Store next node
            curr->next = prev; // Reverse current node's pointer
            prev = curr;       // Move prev one step ahead
            curr = next;       // Move curr one step ahead
        }

    return prev;
    }   
};