#include <vector>
#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int val) : val(val), next(nullptr) {}
};

class LinkedList{
public:
    ListNode *head;

    LinkedList() : head(nullptr) {}

    // Write append and display function
    void append(int val) {
        ListNode* node = new ListNode(val);

        if (head == nullptr) {
            head = node;
            node -> next = nullptr;
            return;
        }

        ListNode* temp = head;
        while (temp -> next != nullptr) {
            temp = temp -> next;
        }

        temp -> next = node;
    }

    void display() {
        ListNode* temp = head;
        while (temp != nullptr) {
            cout << temp -> val << "->";
            temp = temp -> next;
        }

        cout << "NULL" << endl;
    }
};

int main(void) {
    LinkedList *list = new LinkedList();

    list->append(2);
    list->append(1);
    list->append(0);
    list->append(1);

    list->display();

    // copy data to a vector
    vector<int> data;

    ListNode *temp = list->head;
    while (temp != nullptr) {
        data.push_back(temp->val);
        temp = temp -> next;
    }

    // Apply the Dutch National Flag Algorithm
    int low = 0;
    int mid = 0;
    int high = data.size() - 1;

    while (mid <= high) {
        if (data[mid] == 0) {
            swap(data[mid], data[low]);
            low++;
            mid++;
        } else if (data[mid] == 1) {
            mid++;
        } else {
            swap(data[mid], data[high]);
            high--;
        }
    }

    temp = list->head;
    int i = 0;

    while (temp != nullptr) {
        temp->val = data[i++];
        temp = temp->next;
    }

    list->display();

    return 0;
}