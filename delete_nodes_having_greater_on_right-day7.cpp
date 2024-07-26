/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
public:
    Node* compute(Node* head) {
        if (head->next == nullptr) {
            return head;
        }
        
        head->next = compute(head->next);
        if (head->data < head->next->data) {
            return head->next;
        }
        
        return head;
    }
};
