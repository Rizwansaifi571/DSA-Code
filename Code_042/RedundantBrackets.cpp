// link : https://www.naukri.com/code360/problems/redundant-brackets_975473

#include <iostream> 
#include <stack>
using namespace std;


bool findRedundantBrackets(string &s)
{   
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }

        else { // ch ya toh ')' hai or lowercase letter (ignore letter)
            if(ch == ')') {
                bool isRedundant = true;

                while(st.top() != '(') {
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }

                if(isRedundant == true) return true;
                st.pop();
            }
        }
    }
    return false;
}

int main() {
    string s = "(a*b)";
    cout << findRedundantBrackets(s) << endl;

    return 0;
}
