// link : https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include <iostream>
#include <queue>
using namespace std;


class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        
        vector <int> ans;
        deque<int> dq;
        
        for(int i = 0; i < k; i++) {
            if(arr[i] < 0) {
                dq.push_back(i);
            }
        }
        
        if(dq.size() > 0) {
            ans.push_back(arr[dq.front()]);
        }
        else {
            ans.push_back(0);
        }
        
        for(int i = k; i < arr.size(); i++) {
            
            if(!dq.empty() && (dq.front()) <= i - k) {
                dq.pop_front();
            }
            
            if(arr[i] < 0) {
                dq.push_back(i);
            }
            
            if(dq.size() > 0) {
                ans.push_back(arr[dq.front()]);
            }
            else {
                ans.push_back(0);
            }
        }
        return ans;
        
    }
};

int main() {
    return 0;
}