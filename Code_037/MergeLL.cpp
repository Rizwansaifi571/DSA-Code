
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


Node* solve(Node* &first, Node* &second) {

    if(first->next == NULL) {
        first->next = second;
        return first;
    }

    Node* curr1 = first;
    Node* next1 = first->next;
    Node* curr2 = second;
    Node* next2 = NULL;

    while(next1 != NULL && curr2 != NULL) {

        if(curr1->data <= curr2->data && curr2->data <= next1->data) {
            next2 = curr2->next;
            curr1 -> next = curr2;
            curr2 -> next = next1;
            curr1 = curr2;
            curr2 = next2;
        }

        else {
            curr1 = next1;
            next1 = next1 -> next;

            if(next1 == NULL) {
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node* MergeLL(Node* &head1, Node* &head2) {
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;

    if(head1 -> data <= head2 -> data) {
        return solve(head1, head2);
    }
    else {
        return solve(head2, head1);
    }
}



int main() {
    Node* node1 = new Node(1);
    

    // head creation
    Node* head = node1;


    insertAtHead(head, 0);
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 0);
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 0);
    insertAtHead(head, 1);
    print(head);

    return 0;
}