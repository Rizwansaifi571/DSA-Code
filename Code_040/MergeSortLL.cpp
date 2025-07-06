#include <iostream>
using namespace std;

class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};


node* findMid(node* head) {
    node* slow = head;
    node* fast = head->next;

    while(fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
    }

    return slow;
}


node* merge(node* left, node* right) {

    if(left == NULL) return right;
    if(right == NULL) return left;

    node* tempHead = new node(-1);     // dummy node with value -1;
    node* temp = tempHead; 

    while(left != NULL && right != NULL) {
        if(left -> data <= right -> data) {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }

    while(left != NULL) {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != NULL) {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }

    node* result = tempHead -> next;     // get the actual first node
    
    delete tempHead;                     // delete dummy node to prevent memory leak

    return result;
}

node* mergeSort(node *head) {
    if(head == NULL || head -> next == NULL) return head;

    node* mid = findMid(head);

    node* left = head;
    node* right = mid -> next;
    mid -> next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    node* result = merge(left, right);

    return result;
}


void printList(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    node* head = new node(5);
    head->next = new node(3);
    head->next->next = new node(8);
    head->next->next->next = new node(1);
    head->next->next->next->next = new node(7);

    cout << "Original List: ";
    printList(head);

    head = mergeSort(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
