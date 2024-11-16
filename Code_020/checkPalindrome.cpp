// check palindrome

#include <iostream>
#include <cctype>
using namespace std;

void checkPalindrome(char s[]) {
    int start = 0;
    int end = 0;
    while(s[end] != '\0') {
        end++;
    }
    
    while(start < end - 1) {
        if (tolower(s[start]) == tolower(s[end - 1])) {
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