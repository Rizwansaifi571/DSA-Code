/*
Valid Palindrome

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.


link : https://leetcode.com/problems/valid-palindrome/description/
*/

#include <iostream>
using namespace std;

bool valid(char ch) {
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1;
    } else {
        return 0;
    }
}

char toLowerCase(char ch) {
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    } else {
        char temp1 = ch - 'A' + 'a';
        return temp1;
    }
}


bool checkpalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while( start <= end) {
        if(s[start] == s[end]) {
            start++;
            end--;
        } else {
            return 0;
        }
    }
    return 1;
}

bool isPalindrome(string s) {
    string temp = "";
    for(int j = 0; j < s.length(); j++) {
        if (valid(s[j])) {
            temp.push_back(s[j]);
        }
    }

    for(int i = 0; i < temp.length(); i++) {
        temp[i] = toLowerCase(temp[i]);
    }

    return checkpalindrome(temp);


}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << (isPalindrome(s) ? "true" : "false") << endl;

    s = "race a car";
    cout << (isPalindrome(s) ? "true" : "false") << endl;

    s = " ";
    cout << (isPalindrome(s) ? "true" : "false") << endl;

    return 0;
}