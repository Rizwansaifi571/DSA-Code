// link : https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

#include <iostream>
#include <stack>
using namespace std;

stack<int> pushAtBottom(stack<int>& st, int x) {
    
    // base case
    if(st.empty()) {
        st.push(x);
        return st;
    }

    int num = st.top();
    st.pop();

    // recursion call
    pushAtBottom(st, x);
    st.push(num);

    return st;
}


int main() {
    stack<int> st;
    int x = 9;
    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);

    stack<int> result = pushAtBottom(st, x);

    while(!result.empty()) {
        cout << "|" <<result.top() << "|" << endl; 
        result.pop();
    }

    return 0;
}