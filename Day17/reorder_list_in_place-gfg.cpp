class Solution
{
public:
    void reorderList(ListNode *head)
    {
        if (!head || !head->next)
            return;

        // Find the middle of the list
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half
        ListNode *secondHead = reverseHalf(slow->next);
        slow->next = nullptr; // Split the list into two halves

        // Merge the two halves
        ListNode *firstHead = head;
        while (secondHead)
        {
            ListNode *temp1 = firstHead->next;
            ListNode *temp2 = secondHead->next;

            firstHead->next = secondHead;
            secondHead->next = temp1;

            firstHead = temp1;
            secondHead = temp2;
        }
    }

private:
    ListNode *reverseHalf(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *current = head;
        ListNode *next = nullptr;

        while (current)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }
};
