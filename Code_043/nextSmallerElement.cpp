// link : https://www.naukri.com/code360/problems/next-smaller-element_1112581

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);

    for(int i = n - 1; i >= 0; i--) {
        while(st.top() >= arr[i]) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 6};
    int n = arr.size();
    vector<int> result = nextSmallerElement(arr, n);

    cout << "Next Smaller Elements:\n";
    for(int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
