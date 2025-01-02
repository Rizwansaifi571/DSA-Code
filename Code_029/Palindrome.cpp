// problem 2 - > check palindrome

#include <iostream>
using namespace std;

// bool checkPalindrome(string s, int start, int end) {

//     // base case
//     if(start >= end) {
//         return true;
//     }

//     else if(s[start] != s[end])
//         return false;

//     checkPalindrome(s, start + 1, end - 1);
// }


bool checkPalindrome(string s, int start = 0) {

    int end = s.length() - 1 - start;
    // base case
    if(start >= end) {
        return true;
    }

    else if(s[start] != s[end])
        return false;

    checkPalindrome(s, start + 1);
}


int main() {
    string s = "RIZIR";
    int ans = checkPalindrome(s);
    cout << (ans ? "Yes Palindrome!!" : "Not Palindrome!!") << endl;
    return 0;
}