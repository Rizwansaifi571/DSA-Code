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

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(int pos, int data, Node* &head, Node* & tail) {

    if(pos == 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;
    
    while(count < pos - 1) {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL) {
        insertAtTail(tail, data);
        return;
    }
    
    
    Node* nodetoInsert = new Node(data);
    nodetoInsert -> next = temp -> next;
    temp -> next = nodetoInsert;
}

// ======= another way =====================

void insertAtPos(Node* &head, Node* &tail,  int data, int pos) {
    Node* temp = new Node(data);

    if(pos <= 1) {
        temp->next = head;
        head = temp;
        return;
    }

    Node* curr = head;
    while(pos > 2 && curr->next != nullptr) {
        pos--;
        curr = curr->next;
    }

    if(curr->next == nullptr) {
        tail->next = temp;
        tail = temp;
        return;
    }

    temp->next = curr->next;
    curr->next = temp;
}


void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    // dyanmically
    Node* node1 = new Node(1);
    
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // statical
    // Node node1(99);
    // cout << node1.data << endl;
    // cout << node1.next << endl;


    // head creation
    Node* head = node1;

    // tail creation 
    Node* tail = node1;


    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtTail(tail, 5);
    insertAtPosition(1, 6, head, tail);
    insertAtPosition(5, 7, head, tail);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    return 0;
}