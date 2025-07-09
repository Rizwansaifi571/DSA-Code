#include <iostream>
#include <stack>
using namespace std;

string reverseStr(string str) {
    stack<char> st;

    for(int i = 0; i < str.length(); i++) {
        st.push(str[i]);
    }

    string ans = "";

    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}

int main() {

    string str = "RIZWAN";
    cout << reverseStr(str) << endl;
    return 0;
}