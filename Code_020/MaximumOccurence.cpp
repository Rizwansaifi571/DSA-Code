/*
Most Frequent Character

link : https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.
Your Task:
The task is to complete the function getMaxOccuringChar() which returns the character which is most occurring.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |s|

Constraints:
1 ≤ |s| ≤ 100

*/

#include <iostream>
using namespace std;


char MaxOccuring(string s) {
    int arr[26] = {0};

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        int number = 0;
        if(ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        } else {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for(int i = 0; i < 26; i++) {
        if(maxi < arr[i]) {
            maxi = arr[i];
            ans = i;
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}


int main() {
    string s = "test";
    cout << MaxOccuring(s) << endl;
    return 0;
}