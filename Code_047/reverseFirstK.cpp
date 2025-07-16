// link : https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> reverseFirstK(queue<int>& q, int k) {
    stack<int> s;
    int n = q.size();
    for(int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    
    for(int i = 0; i < (n - k); i++) {
        int element = q.front();
        q.pop();
        q.push(element);
    }
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
    reverseFirstK(q, 3);
    print(q);

    return 0;
}