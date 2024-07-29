/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Bring all the pointers to the same position
        ListNode *tempA = headA;
        ListNode *tempB = headB;

        // Check sizes of the lists
        int sizeA = 0;
        int sizeB = 0;

        // Determining sizes
        while (tempA != nullptr) {
            sizeA++;
            tempA = tempA -> next;
        }

        while (tempB != nullptr) {
            sizeB++;
            tempB = tempB -> next;
        }

        tempA = headA;
        tempB = headB;

        if (sizeA > sizeB) {
            while (sizeA > sizeB) {
                sizeA--;
                tempA = tempA -> next;
            }
        } else {
            while (sizeB > sizeA) {
                sizeB--;
                tempB = tempB -> next;
            }
        } // Now they are at the same position

        while (tempA != nullptr && tempB != nullptr) {
            if (tempA == tempB) {
                return tempA;
            }

            tempA = tempA -> next;
            tempB = tempB -> next;
        }

        return nullptr;
    }
};