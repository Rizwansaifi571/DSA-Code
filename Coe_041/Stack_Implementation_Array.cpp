#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top;


    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() {
        if(top > -1) {
            top--;
        }
        else {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek() {
        if(top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is Empty : ";
            return -1;
        }
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
    }

};

int main() {

    Stack st(5);

    st.push(22);
    st.push(75);
    st.push(43);
    st.push(55);
    st.push(65);
    st.push(44);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();

    if(st.isEmpty()) cout << "Stack is Empty" << endl;
    else cout << "stack is not Empty" << endl;
    return 0;
}