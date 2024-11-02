/*
 Square Root of a number
 link : https://leetcode.com/problems/sqrtx/

Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 

Constraints:

0 <= x <= 231 - 1
*/


#include <iostream>
using namespace std;

int root(int num) {
    int start = 0;
    int end = num;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if ((mid * mid) == num) {
            return mid;
        } else if ((mid * mid ) < num) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}


double moreprecise(int num, int precision, int Intsol) {
    double factorial = 1;
    double ans = Intsol;

    for (int i = 0; i < precision; i++) {
        factorial = factorial / 10;

        for (double j = ans; j*j < num; j = j + factorial) {
            ans = j;
        }
    }
    return ans;
}

int main () {
    cout << "Enter the number : " ;
    int n;
    cin >> n;
    int Intsol = root(n);
    cout << "Answer is " << moreprecise(n, 3, Intsol) << endl;
    return 0;
}