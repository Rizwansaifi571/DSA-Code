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

// Function for reverse a a linked list

// -> Approach 1 (Iteration)
Node* reverseLinkedList(Node* head) {
    if(head == NULL || head->next == NULL) return head;

    Node* prev = NULL;
    Node* curr = head;


    while(curr != NULL) {
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// Approach 2 (Recursively)
void solve(Node* &head, Node* curr, Node* prev) {
    // base case
    if(curr == NULL) {
        head = prev;
        return;
    }

    solve(head, curr->next, curr);
    curr->next = prev;
}

Node* reverseLinkedList2(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    solve(head, curr, prev);
    return head;
}


// Approach 3 (By Recusion)
Node* reverse1(Node* &head) {
    if(head == NULL || head->next == NULL) return head;

    Node* newhead = reverse1(head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;
}



int main() {
    return 0;
}