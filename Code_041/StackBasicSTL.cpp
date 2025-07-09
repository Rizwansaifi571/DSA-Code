#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(2);
    s.push(3);

    cout << "Top element before POP : " << s.top() << endl;
    s.pop();

    if(s.empty()) cout << "stack is empty" << endl;
    else cout << "stack is not empty" << endl;

    cout << "stack size : " << s.size() << endl;

    return 0;
}