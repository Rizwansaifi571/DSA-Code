/*
Permutation in String

link : https://leetcode.com/problems/permutation-in-string/description/

Given two strings s1 and s2, return true if s2 contains a 
permutation
 of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.
*/

#include <iostream>
using namespace std;

// Function to compare two frequency arrays
bool isEqual(int a[26], int b[26]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

// Main function to check if s1's permutation is a substring of s2
bool checkInclusion(string s1, string s2) {
    int count1[26] = {0};

    // Build frequency array for s1
    for (int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // Initialize frequency array for the first window of s2
    int count2[26] = {0};
    int windowSize = s1.length();

    if (s2.length() < windowSize) return false; // Early exit if s2 is shorter than s1

    for (int i = 0; i < windowSize; i++) { /// only s1 jitne element le rhe hai
        int index = s2[i] - 'a';
        count2[index]++;
    }

    // Check the first window
    if (isEqual(count1, count2)) {
        return true;
    }

    // Slide the window across s2
    for (int i = windowSize; i < s2.length(); i++) {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        if (isEqual(count1, count2)) {
            return true;
        }
    }

    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
