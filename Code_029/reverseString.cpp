// problem 1 -> reverse string using recusion

#include <iostream>
using namespace std;

string reverseString(string s, int start, int end) {
    
    // base
    if(start >= end) 
        return s;

    swap(s[start], s[end]);

    return reverseString(s, start + 1, end - 1);
}

int main() {
    string s = "R I Z W A N";
    cout << reverseString(s, 0, s.length() - 1) << endl;
    return 0;
}