#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

// Traversing LinkedList
void print(Node* &head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// Length of LinkedList
int getLength(Node* &head) {
    int len = 0;
    Node* temp = head;
    while(temp != nullptr) {
        len++;
        temp = temp->next;
    }
    return len;
}



// Insertion
//Insert At head
void InsertAtBeg(int data, Node* & head, Node* & tail) {
    Node* temp = new Node(data);

    if(head == NULL) {
        head = temp;
        tail = temp;
    }
    else {
        temp->next = head;
        head->prev = temp;
        head = temp;    
    }
}

//Insert At Tail
void InsertAtEnd(int data, Node* &head, Node* & tail) {
    Node* temp = new Node(data);
    if(tail == NULL) {
        tail = temp;
        head = temp;
    }
    else { 
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// Insert At Any Position
void InsertAtPos(int data, int pos, Node* &head, Node* &tail) {
    if(pos <= 1) {
        InsertAtBeg(data, head, tail);
        return;
    }
    
    Node* curr = head;
    int cnt =1; 
    while(cnt < pos - 1) {
        curr = curr -> next;
        cnt++;
    }
    
    if(curr->next == NULL) {
        InsertAtEnd(data, head, tail);
        return;
    }

    Node* temp = new Node(data);
    
    temp->next = curr->next;
    curr->next->prev = temp;
    curr->next = temp;
    temp->prev = curr;
}




// Deletion
void deleteNode(int pos, Node* &head, Node* &tail) {
    if(pos == 1) {
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else {
        Node* curr = head;
        Node* back = NULL;
        int cnt = 1;
        while(cnt < pos) {
            back = curr;
            curr = curr->next;
            cnt++;
        }

        curr-> prev = NULL;
        back->next = curr-> next;
        curr->next = nullptr;
        delete curr;
    }
}




int main() {
    Node* node = new Node(99); 
    Node* head = node;
    Node* tail = node;
    InsertAtBeg(89, head, tail);
    InsertAtBeg(79, head, tail);
    InsertAtBeg(69, head, tail);
    InsertAtEnd(109, tail, tail);
    InsertAtPos(59, 1, head, tail);
    InsertAtPos(119, 7, head, tail);
    InsertAtPos(70, 3, head, tail);
    print(head);   
    deleteNode(1, head, tail); 
    print(head);   
    deleteNode(7, head, tail); 
    print(head);   
    deleteNode(2, head, tail); 
    print(head);   
    return 0;
}