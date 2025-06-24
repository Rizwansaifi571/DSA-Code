#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function for find Mid of a linked list

// -> Approach 1 (using length)
Node* findMiddle(Node* head) {
    if (head == NULL) return NULL;

    int len = 0;
    Node* temp = head;

    while (temp != NULL) {
        len++;
        temp = temp->next;
    }

    int index = len / 2;
    temp = head;

    while (index--) {
        temp = temp->next;
    }

    return temp;
}


// approach 2 (Fast & Slow Pointer)
Node* findMiddle2(Node* head) {
    if(head == NULL) return head;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL || fast -> next == NULL) {
        slow = slow -> next;
        fast = fast -> next;
    }
    
    return slow;
} 



int main() {
    return 0;
}