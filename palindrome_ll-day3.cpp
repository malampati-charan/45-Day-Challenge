#include <vector>
using namespace std;

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
    bool isPalindrome(ListNode* head) {
        string number = "";
        
        ListNode* temp = head;
        while (temp != nullptr) {
            number += to_string(temp -> val);
            temp = temp -> next;
        }

        // Now you have the data, check for palindrome
        int left = 0;
        int right = number.size() - 1;

        while (left < right) {
            if (number[left] == number[right]) {
                left++;
                right--;
            } else {
                return false;
            }
        }

        return true;
    }
};