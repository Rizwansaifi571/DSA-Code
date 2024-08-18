// Date : 15, Aug, 2024.

// Decimal to Binary.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter decimal number : ";
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





// Binary to Decimal.

    cout << "Enter binary number : ";
    cin >> n;

    int i = 0; 
    ans = 0;

    while(n != 0) {
        int digit = n % 10;

        if (digit == 1) {
            ans = ans + pow(2, i);
        }

        n = n/10;
        i++;
    }
    cout << ans << endl;
}