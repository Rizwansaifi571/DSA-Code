#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
public:
    Node* top;   // like an head

    Stack() {
        top = NULL;   // at starting head is null
    }


    void push(int value) {                      // insertion at beginning  
        Node* newNode = new Node(value);
        newNode -> next = top;
        top = newNode;
    }

    void pop() {
        if(top == NULL) {
            cout << "Stack UnderFlow" << endl;
            return;
        }
        Node* temp = top;
        top = top -> next;
        delete temp;
    }

    int peek() {
        if(top == NULL) {
            cout << "Stack UnderFlow : ";
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    ~Stack() {          // prevent memory leaks
        while(top != nullptr) {
            pop();
        }
    }
};


int main() {
    Stack st;

    st.push(22);
    st.push(75);
    st.push(43);
    st.push(55);
    st.push(65);
    st.push(44);  // No limit in LL implementation

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();

    if (st.isEmpty()) cout << "Stack is Empty" << endl;
    else cout << "Stack is not Empty" << endl;

    return 0;
}