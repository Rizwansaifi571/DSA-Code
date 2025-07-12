// link : https://www.geeksforgeeks.org/problems/max-rectangle/1

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> arr, int n) {
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);

    for(int i = n - 1; i >= 0; i--) {
        while(st.top() != -1 && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> arr, int n) {
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);

    for(int i = 0; i < n; i++) {
        while(st.top() != -1 && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();

    vector<int> next(n);
    next = nextSmallerElement(heights, n);

    vector<int> prev(n);
    prev = prevSmallerElement(heights, n);

    int area = INT_MIN;

    for(int i = 0; i < n; i++) {
        int l = heights[i];

        if(next[i] == -1) {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;

        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}



class Solution {
  public:
    int maxArea(vector<vector<int>> &mat) {
        int area = largestRectangleArea(mat[0]);
        
        for(int i = 1; i < mat.size(); i++) {
            for(int j = 0; j < mat[0].size(); j++) {
                
                if(mat[i][j] != 0) {
                    mat[i][j] = mat[i][j] + mat[i-1][j];
                }
                else {
                    mat[i][j] = 0;
                }
                
            }
            area = max(area, largestRectangleArea(mat[i]));
        }
        return area;
    }
};