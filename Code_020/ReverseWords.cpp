/*
input example: My name is Rizwan
output example: yM eman si nawziR
*/

#include <iostream>
using namespace std;

string reverse(string s) {
    int start = 0;
    int end = s.length() - 1;
    while(start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}

string replace(string s) {
    string temp = "";
    string temp1 = "";
    for(int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            temp1.push_back(s[i]);
        } else {
            temp += reverse(temp1);
            temp += " ";
            temp1 = "";
        }
    }
    temp += reverse(temp1);
    return temp;
}

int main() {
    string s = "My name is Rizwan";
    cout << replace(s);
    return 0;
}