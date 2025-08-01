#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;

    }
    
    ~Node() {
        int value = this->data;
        while(this->next != NULL) {
            delete next;
            next = nullptr;
        }
        cout << "Memory is Free for Node with Data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int data) {
    Node* temp = new Node(data);
    if(tail == NULL) {
        tail = temp;
        tail->next = temp;
    }
    else {
        Node* curr = tail;
        while(curr->data != element) {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int element) {
    if(tail == NULL) {
        cout << "List UnderFlow" << endl;
        return;
    }

    Node* prev = tail;
    Node* curr = tail -> next;
    while(curr->data != element) {
        prev = curr;    
        curr = curr->next;
    }
    prev->next = curr->next;

    // 1 Node LinkedList
    if(curr == prev) {
        tail = NULL;
    }
    else if(tail == curr) {
        tail = prev;
    }
    curr->next = NULL;
    delete curr;

}


void print(Node* &tail) {
    Node* temp = tail;
    do{
        cout<< tail -> data << " -> ";
        tail = tail -> next;
    }
    while(tail != temp);
    cout << endl;
}


bool isCyclePresent(Node* tail) {
    if(tail == NULL) return false;

    map<Node*, bool> check;
    
    while(tail != NULL) {
        if(check[tail] == true) {
            return true;
        }
        check[tail] = true;
        tail = tail -> next;
    }
    return false;
}

bool floydCycleCheck(Node* tail) {
    if(tail == NULL) return false;

    Node* slow = tail;
    Node* fast = tail;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(fast == slow) return true;
    }
    return false;
}


Node* CyclceElement(Node* tail) {
    if(tail == NULL) return tail;

    Node* slow = tail;
    Node* fast = tail;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow) {
            slow = tail;
            while(fast != slow) {
                fast = fast->next;
                slow = slow->next;
            }
            return slow;
        }
    }
    cout << "No Loop present" << endl;
    return nullptr;
}

void removeLoop(Node* tail) {
    if(tail == NULL) {
        cout << "Loop Not exist" << endl;
        return;
    }

    Node* slow = tail;
    Node* fast = tail;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow) {
            slow = tail;
            while(fast -> next != slow-> next) {
                fast = fast->next;
                slow = slow->next;
            }
            fast->next = NULL;
            cout << "Loop Remove" << endl;
            return;
        }
    }
    cout << "Loop not exist" << endl;
}

int main() {
    Node* tail = NULL;
    insertNode(tail, 0, 10);
    insertNode(tail, 10, 20);
    insertNode(tail, 10, 15);
    insertNode(tail, 20, 25);
    // deleteNode(tail, 10);
    print(tail);

    removeLoop(tail);
    cout << isCyclePresent(tail) << endl;
    removeLoop(tail);
    cout << floydCycleCheck(tail) << endl;
    cout << CyclceElement(tail)->data << endl;
    return 0;
}