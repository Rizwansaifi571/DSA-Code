// problem 2 - > check palindrome

#include <iostream>
using namespace std;

bool checkPalindrome(string s, int start, int end) {

    // base case
    if(start >= end) {
        return true;
    }

    else if(s[start] != s[end])
        return false;

    checkPalindrome(s, start + 1, end - 1);
}

int main() {
    string s = "RIZIR";
    int ans = checkPalindrome(s, 0, s.length() - 1);
    cout << (ans ? "Yes!!" : "No!!") << endl;
    return 0;
}