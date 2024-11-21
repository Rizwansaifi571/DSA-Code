/*
Rotate Array

link : https://leetcode.com/problems/rotate-image/description/

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
Example 2:


Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
 

Constraints:

n == matrix.length == matrix[i].length
1 <= n <= 20
-1000 <= matrix[i][j] <= 1000

*/

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& row) {
    int start = 0;
    int end = row.size() - 1;
    while(start < end) {
        swap(row[start], row[end]);
        start++;
        end--;
    }
}

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // step 1 : transpose matrix
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < n; i++) {
        reverse(matrix[i]);
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    rotate(matrix);

    // Output the rotated matrix
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
