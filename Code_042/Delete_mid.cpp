// link : https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246

#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>&inputStack, int count, int size) {
    // base case
    if(count == size / 2) {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // recurssive call
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
	int count = 0;
    
    solve(inputStack, count, N);
}

int main() {

    stack<int> st;
    // Push elements to create stack: 1, 2, 3, 4, 5
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    int size = st.size();
    cout << "Original stack size: " << size << endl;
    
    deleteMiddle(st, size);
    
    cout << "Stack size after deleting middle: " << st.size() << endl;
    
    // Print remaining elements
    cout << "Remaining elements (top to bottom): ";
    stack<int> temp = st;
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    
    return 0;
}