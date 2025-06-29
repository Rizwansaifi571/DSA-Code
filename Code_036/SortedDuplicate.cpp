
#include <iostream>
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


void RemoveSortedDuplicates(Node* &head) {

    if(head == NULL || head -> next == NULL) return;

    Node* temp = head -> next;
    Node*curr = head;

    while(temp != NULL) {
        if(curr->data != temp->data) {
            curr->next = temp;
            curr = curr->next;
        }
        temp = temp->next;
    }
    curr->next = NULL;
}

void RemoveSortedDuplicates2(Node* &head) {

    if(head == NULL || head -> next == NULL) return;

    Node*curr = head;

    while(curr != NULL && curr -> next != NULL) {
        if(curr->data != curr->next->data) {
            curr = curr->next;
        }
        else {
            Node* temp = curr->next->next;
            delete curr->next;
            curr->next = temp;
        }
    }
}

int main() {
    Node* node1 = new Node(1);
    

    // head creation
    Node* head = node1;


    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    print(head);
    RemoveSortedDuplicates2(head);
    print(head);

    return 0;
}