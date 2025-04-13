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

void intertAtHead(Node* &head, int data) {
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

int main() {
    // dyanmically
    Node* node1 = new Node(99);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // statical
    // Node node1(99);
    // cout << node1.data << endl;
    // cout << node1.next << endl;


    // head creation
    Node* head = node1;

    intertAtHead(head, 109);
    intertAtHead(head, 209);
    intertAtHead(head, 309);
    print(head);
    return 0;
}