// check palindrome

#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

void checkPalindrome(char s[]) {
    int start = 0;
    int end = 0;
    while(s[end] != '\0') {
        end++;
    }
    
    while(start < end - 1) {
        if (toLowerCase(s[start]) == toLowerCase(s[end - 1])) {
            start++;
            end--;
        } else {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;


}

int main() {
    char s[20];
    cout << "Enter Palindrome : " ;
    cin >> s;
    checkPalindrome(s);
    return 0;
}