/*
Modular Exponentiation <Easy>
link : https://www.naukri.com/code360/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7&leftPanelTabValue=PROBLEM

Problem statement
You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100   
1 <= X, N, M <= 10^9

Time limit: 1 sec
Sample Input 1 :
2 
3 1 2
4 3 10
Sample Output 1 :
1
4
Explanation for Sample Output 1:
In test case 1, 
X = 3, N = 1, and M = 2 
X ^ N = 3 ^ 1 = 3 
X ^ N % M = 3 % 2 = 1. 
So the answer will be 1.

In test case 2,
X = 4, N = 3, and M = 10 
X ^ N = 4 ^ 3 = 64 
X ^ N % M = 64 % 10 = 4. 
So the answer will be 4.
Sample Input 2 :
2
5 2 10 
2 5 4
Sample Output 2 :
5
0
Explanation for Sample Output 2:
In test case 1, 
X = 5, N = 2, and M = 10 
X^N = 5^2 = 25 
X^N %M = 25 % 10 = 5. 
So the answer will be 5.

In test case 2,
X = 2, N = 5, and M = 4 
X^N = 2^5 = 32 
X^N %M = 32 % 4 = 0. 
So the answer will be 0.

*/


#include <iostream>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	int res = 1;

	while(n > 0) {
		if(n & 1) {     // check for even example n = 5 => 101 & 001 always 1 which is true 
			res = ((1LL * (res) * (x)%m)%m);        // this is formula no worry and 1LL is type case to int to Long Long int
		}
		x = (1LL * (x)%m * (x)%m)%m;            // this is formula no worry  and 1LL is type case to int to Long Long int
		n = n >> 1;      // right shift means divide by 2 this is more effiecient   
	}
	return res;
}

int main() {
    cout << modularExponentiation(4, 3, 10) << endl;
    return 0;
}