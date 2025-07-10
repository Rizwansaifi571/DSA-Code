// link : https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875


#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int element) {
    // base case
    if(st.empty()) {
        st.push(element);
        return;
    }

    int num = st.top();
    st.pop();

    insertAtBottom(st, element);

    st.push(num);
}

void reverseStack(stack<int> &st) {
    // base case
    if(st.empty()) {
        return;
    }

    int num = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, num);
}

void print(stack<int> result) {
    while(!result.empty()) {
        cout << "|" <<result.top() << "|" << endl; 
        result.pop();
    }
    cout << endl;
}

int main() {
    stack<int> result;
    result.push(7);
    result.push(1);
    result.push(4);
    result.push(5);

    print(result);

    reverseStack(result);

    print(result);
    return 0;
}