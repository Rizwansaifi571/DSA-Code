#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = nullptr;
        random = nullptr;
    }
};

void insertAtTail(Node* &head, Node* &tail, int d) {
    Node* newNode = new Node(d);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail -> next = newNode;
        tail = newNode;
    }
}


Node *cloneLinkedList(Node *head) {


    Node* cloneHead = NULL;
    Node* clonetail = NULL;

    Node* temp = head;

    while(temp != NULL) {
        insertAtTail(cloneHead, clonetail, temp->data);
        temp = temp -> next;
    }

    unordered_map<Node*, Node*> mymap;

    temp = head;
    Node* temp2 = cloneHead;
    while(temp != NULL) {
        mymap[temp] = temp2;
        temp = temp -> next;
        temp2 = temp2 -> next;
    }

    temp = head;
    temp2 = cloneHead;

    while(temp != NULL) {
        temp2 -> random = mymap[temp -> random];
        temp = temp -> next;
        temp2 = temp2 -> next;
    }
    return cloneHead;
}



Node *cloneLinkedList2(Node *head) {
        if (head == NULL) return NULL;

        // Step 1: Insert cloned nodes in between original nodes
        Node* temp = head;
        while(temp != NULL) {
            Node* newNode = new Node(temp->data);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }

        // Step 2: Set random pointers of cloned nodes
        temp = head;
        while(temp != NULL) {
            if(temp->random != NULL) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        // Step 3: Separate original and cloned list
        Node* cloneHead = head->next;
        Node* orgNode = head;
        Node* cloneNode = cloneHead;

        while(orgNode != NULL && cloneNode != NULL) {
            orgNode->next = cloneNode->next;
            orgNode = orgNode->next;

            if(orgNode != NULL) {
                cloneNode->next = orgNode->next;
            }
            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }