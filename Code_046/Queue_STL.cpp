
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout << "Size of Queue Before Pop : " << q.size() << endl;
    cout << "Before POP : " << q.front() << endl;
    q.pop();
    cout << "After POP : " << q.front() << endl;
    cout << "Size of Queue After Pop : " << q.size() << endl;
    
    cout << "Is queue is EMpty? : " << (q.empty() ? "Yes" : "No") << endl;
    return 0;
}