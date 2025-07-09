// link : https://www.naukri.com/code360/problems/valid-parenthesis_795104

#include <iostream>
#include <stack>
using namespace std;

bool isValidParenthesis(string s) {
    stack<char> st;

    for(int i = 0; i < s.length(); i++) {
        
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) return false; // zaada hi close bracket ho gae   --> important comdition because if stack is empty how we check st.top()

            if((st.top() == '{' && s[i] == '}') || 
               (st.top() == '(' && s[i] == ')') ||
               (st.top() == '[' && s[i] == ']')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s = "[{[()]}]";
    cout << isValidParenthesis(s) << endl;
    return 0;
}