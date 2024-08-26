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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Reverse both lists
        ListNode* reversedl1 = reverseList(l1);
        ListNode* reversedl2 = reverseList(l2);

        ListNode* temp1 = reversedl1;
        ListNode* temp2 = reversedl2;
        ListNode* result = nullptr;
        int carry = 0;

        // Add the numbers from the two reversed lists
        while (temp1 != nullptr || temp2 != nullptr || carry != 0) {
            int sum = carry;
            
            if (temp1 != nullptr) {
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if (temp2 != nullptr) {
                sum += temp2->val;
                temp2 = temp2->next;
            }

            carry = sum / 10;
            int digit = sum % 10;

            // Create a new node with the digit and add it to the front of the result list
            ListNode* newNode = new ListNode(digit);
            newNode->next = result;
            result = newNode;
        }

        return result;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* next = nullptr;
        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }
};
