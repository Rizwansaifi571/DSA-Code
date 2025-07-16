// link : https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

#include <iostream>
#include <stack>
#include <unordered_map>
#include <queue>
using namespace std;

string FirstNonRepeating(string &s) {
    
    unordered_map<char, int> count;
    string ans = "";
    queue<int> q;
    
    for(int i = 0; i < s.length(); i++) {
        q.push(s[i]);
        count[s[i]]++;
        
        while(!q.empty()) {
            if(count[q.front()] > 1) {
                q.pop();
            }
            else {
                ans.push_back(q.front());
                break;
            }
        }
        
        if(q.empty()) {
            ans.push_back('#');
        }
    }
    return ans;
}