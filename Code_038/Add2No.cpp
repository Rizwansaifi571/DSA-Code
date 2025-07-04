
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = nullptr;
    }

};

void insertAtHead(Node* &head, int data) {
    // create new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}


void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << endl;
}


int getLen(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}

Node* reverseLL(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr !=  NULL) {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
    
    Node* temp = new Node(val);
    if(head == NULL) {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail -> next = temp;
        tail = temp;
    }
}

Node* add(Node* first, Node* second) {
    int carry = 0;

    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL || second != NULL || carry != 0) {
        
        int val1 = 0;
        if(first != NULL) val1 = first -> data;

        int val2 = 0;
        if(second != NULL) val2 = second -> data;

        int sum = carry + val1 + val2;

        int digit = sum % 10;

        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
        if(first != NULL) first = first -> next;
        if(second != NULL) second = second -> next;
    }
    return ansHead;
}

Node* Add2No(Node* head1, Node* head2) {
    head1 = reverseLL(head1);
    head2 = reverseLL(head2);

    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* ans = add(head1, head2);

    while (ans->data == 0 && ans->next != NULL) {
        Node* temp = ans;
        ans = ans->next;
        delete temp;
    }
    
    return ans;
}


int main() {
    Node* node1 = new Node(0);
    

    // head creation
    Node* head = node1;


    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    print(head);
    return 0;
}