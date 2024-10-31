/*
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

 

Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

Example 3:

Input: arr = [0,10,5,2]

Output: 1

 

Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.


link : 
https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

*/

#include <iostream>
using namespace std;

int peak(int arr[], int size) {
    int start = 0;
    int end = size -1;

    while(start < end) {
        int mid = start + (end - start)/2;
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 3};
    cout << "Mountain number index is " << peak(arr, 5) << endl;
}