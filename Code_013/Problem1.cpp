/* Search In Rotated Sorted Array 
Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.



Now the array is rotated at some pivot point unknown to you.



For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].



Now, your task is to find the index at which ‘k’ is present in 'arr'.



Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 'arr'. 
3. 'arr' can be rotated only in the right direction.


Example:
Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2

Output: 3

Explanation:
If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
4 3
8 9 4 5


Sample output 1:
-1 


Explanation of Sample Output 1:
For the test case, 3 is not present in the array. Hence the output will be -1.


Sample Input 2:
4 3
2 3 5 8


Sample output 2:
1


Expected Time Complexity:
Try to do this in O(log(n)). 


Constraints:
1 <= n <= 10^5
0 <= k <= 10^9
0 <= arr[i] <= 10^9

Time Limit: 1 second

link : 
https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

*/

#include <iostream>
using namespace std;

int pivot(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while(start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
} 

int binarySearch(int arr[], int start, int end, int k) {
    while(start <= end) {
        int mid = start + (end-start) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] < k){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}


int findposition(int arr[], int n, int k) {
    int p = pivot(arr, n);
    if (k >= arr[p] && k <= arr[n-1]) {
        return binarySearch(arr, p, n-1, k);
    } else {
        return binarySearch(arr, 0, p - 1, k);
    }
}


int main() {
    int arr[5] = {12, 15, 18, 2, 4};
    
    int index = findposition(arr, 5, 2);
    cout << "Index of " << "2" << " is: " << index << endl;
    return 0;
}