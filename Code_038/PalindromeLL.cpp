
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


bool palindrome(Node* head) {
    vector<int> arr;

    Node* temp = head;

    while(temp != NULL) {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    int start = 0;
    int end = arr.size() - 1;

    while(start < end) {
        if(arr[start] == arr[end]) {
            start++;
            end--;
        }
        else {
            return false;
        }
    }
    return true;

}


bool palindrome2(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow -> next;
        fast = fast->next->next;
    }

    Node* prev = nullptr;
    Node* curr = slow;
    Node* forward = NULL;

    while(curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    Node* left = head;
    Node* right = prev;


    while(right != NULL) {
        if(left->data == right->data) {
            left = left->next;
            right = right->next;
        }
        else {
            return false;
        }
    }
    return true;
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
    cout << palindrome2(head) << endl;
    return 0;
}