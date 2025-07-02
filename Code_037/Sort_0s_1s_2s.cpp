
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


void Sort(Node* head) {
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;

    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == 0) count_0++;
        else if(temp->data == 1) count_1++;
        else if(temp->data == 2) count_2++;
        temp = temp->next;
    }

    temp = head;
    while(count_0 > 0) {
        temp->data = 0;
        temp = temp->next;
        count_0--;
    }
    while(count_1 > 0) {
        temp->data = 1;
        temp = temp->next;
        count_1--;
    }
    while(count_2 > 0) {
        temp->data = 2;
        temp = temp->next;
        count_2--;
    }
}

int getLength(Node* head) {
    int cnt = 0;
    while(head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}


void InsertAtTail(Node* &tail, Node* temp) {
    tail->next = temp;
    tail = temp;
}

void Sort2(Node* &head) {
    Node* ZeroHead = new Node(-1);
    Node* ZeroTail = ZeroHead;
    Node* OneHead = new Node(-1);
    Node* OneTail = OneHead;
    Node* TwoHead = new Node(-1);
    Node* TwoTail = TwoHead;

    Node* temp = head;

    while(temp != NULL) {
        if(temp->data == 0) {
            InsertAtTail(ZeroTail, temp);
        }
        else if(temp->data == 1) {
            InsertAtTail(OneTail, temp);
        }
        else if(temp->data == 2) {
            InsertAtTail(TwoTail, temp);
        }   
        
        temp = temp->next;
    }

    if(OneHead -> next != NULL) {
        ZeroTail -> next = OneHead -> next;
    }
    else {
        ZeroTail -> next = TwoHead -> next;
    }

    OneTail -> next = TwoHead -> next;
    TwoTail -> next = NULL;

    head = ZeroHead -> next;

    delete ZeroHead;
    delete OneHead;
    delete TwoHead;
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
    Sort2(head);
    print(head);

    return 0;
}