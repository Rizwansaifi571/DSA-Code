#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// approach 1 - by stack
queue<int> reverseQueue(queue<int> &q) {
    stack<int> s;
    while(!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    return q;
}



// Approach 2 - Recursion
queue<int> reverseQueue1(queue<int> &q) {
    // base case
    if(q.empty()) return q;

    int num = q.front();
    q.pop();

    reverseQueue1(q);

    q.push(num);

    return q;
}


void print(queue<int> q) {
    while(!q.empty()) {
        cout << "| " << q.front() << " ";
        q.pop();
    }
    cout << "|" << endl;
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    print(q);
    reverseQueue1(q);
    print(q);

    return 0;
}