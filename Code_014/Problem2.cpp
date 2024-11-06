/*
Painter's Partition Problem

Problem statement
Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.



You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.



Example :
Input: arr = [2, 1, 5, 6, 2, 3], k = 2

Output: 11

Explanation:
First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time. Thus both painters will paint all the boards in max(8,11) = 11 units of time. It can be shown that all the boards can't be painted in less than 11 units of time.


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
4 2
10 20 30 40


Sample Output 1 :
60


Explanation For Sample Input 1 :
In this test case, we can divide the first 3 boards for one painter and the last board for the second painter.


Sample Input 2 :
2 2
48 90


Sample Output 2 :
90


Expected Time Complexity:
Try to do this in O(n*log(n)).


Constraints :
1 <= n <= 10^5
1 <= k <= n
1 <= arr[i] <= 10^9

Time Limit: 1 sec.

link : 
https://www.naukri.com/code360/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

*/

#include <iostream>
#include <vector> 
#include <numeric>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& boards, int n, int k, int mid) {
    int painterCount = 1;
    int timeSum = 0;

    for (int i = 0;i < n; i++) {

        if (boards[i] > mid) return false;


        if (timeSum + boards[i] <= mid) {
            timeSum += boards[i];
        } else {
            painterCount++;
            if (painterCount > k) {
                return false;
            }
            timeSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int>& boards, int k) {
    int n = boards.size();

    // Edge case : if painter exceed boards, minimum time is the longest board.
    if (k > n) return *max_element(boards.begin(), boards.end());

    int start = *max_element(boards.begin(), boards.end());
    int end = accumulate(boards.begin(), boards.end(), 0);
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(boards, n, k, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;
    cout << findLargestMinDistance(boards, k) << endl;  // Output should be 60
    return 0;
}