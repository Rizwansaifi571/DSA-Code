/*
Count Primes
<Medium>
link : https://leetcode.com/problems/count-primes/description/

Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106

*/

#include <iostream>
#include <vector>
using namespace std;

/*
int countPrimes(int n) {

    if (n <= 2) {
        return 0;
    }
    int fakecount = 2;
    for(int i = 3; i < n; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                fakecount++;
                break;
            }
        }
    }        
    return n - fakecount;
using this we get TLE (time limites exceeded) Error
*/


// Using Sieve of Eratosthenes
int countPrimes(int n) {
    int count = 0;

    vector<bool> prime(n+1, 1);          // prime name vector contain n+1 element with all value 1(True)

    prime[0] = prime[1] = 0;

    for(int i = 2; i < n; i++) {

        if(prime[i]) {
            count++;

            for(int j = 2 * i; j < n; j = j + i) {
                prime[j] = 0;
            }
        }
    }
    return count;
}




int main() {
    cout << countPrimes(10) << endl;
    return 0;
}