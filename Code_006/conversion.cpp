// Date : 15, Aug, 2024.

// Decimal to Binary.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    int ans = 0;
    int power_of_10 = 1;


    while(n !=0 ) {
        
        int bit = n & 1;
        ans = (bit * power_of_10)+ ans;

        n = n >> 1;
        power_of_10 *= 10;
    }

cout << "Answer is : " << ans << endl;

}