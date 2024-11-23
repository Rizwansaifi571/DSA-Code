/*
Modular Exponentiation
link : https://www.naukri.com/code360/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7&leftPanelTabValue=PROBLEM
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