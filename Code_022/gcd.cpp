// relation of gcd or hcf -->
// gcd(a, b) = gcd(a-b, b)

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    } else {
        return a;
    }

    while(a != b) {

        if(a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a; // we change return a to return b this is same thing


}

int main() {
    cout << gcd(24, 72) << endl;
    return 0;
}