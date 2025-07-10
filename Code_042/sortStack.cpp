// link : https://www.naukri.com/code360/problems/sort-a-stack_985275

#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &st, int x) {
    if(st.empty() || st.top() < x) {   // because stack empty hogi tho top kaese nikalenge code crash ho jaegaa
        st.push(x);
        return;
    }

    int num = st.top();
    st.pop();

    sortedInsert(st, x);

    st.push(num);
}

void sortStack(stack<int> &st) {
	// base case
    if(st.empty()) {
        return;
    }

    int num = st.top();
    st.pop();

    sortStack(st);

    sortedInsert(st, num);
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

    sortStack(result);

    print(result);
    return 0;
}