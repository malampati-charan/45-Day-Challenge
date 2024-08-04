/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        long long num1 = 0, num2 = 0;
        int mod = 1000000007;
        while (first || second) {
            if (first) {
                num1 = ((num1 * 10) % mod + (first->data) % mod) % mod;
                first = first->next;
            }
            if (second) {
                num2 = ((num2 * 10) % mod + second->data % mod) % mod;
                second = second->next;
            }
        }

        return (num1 % mod * num2 % mod) % mod;
    }
};