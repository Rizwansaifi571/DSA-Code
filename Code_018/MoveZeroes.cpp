/*
Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Link : https://leetcode.com/problems/move-zeroes/description/

*/

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonzero = 0;
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] != 0) {
            swap(nums[nonzero],nums[i]);
            nonzero++;
        }
    }
}

void printArray(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector <int> nums = {0, 1, 0, 3, 12, 5, 6, 0, 0, 5, 6, 7, 5, 0};
    moveZeroes(nums);
    printArray(nums);
    return 0;
}