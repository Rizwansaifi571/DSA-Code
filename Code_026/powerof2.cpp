#include <iostream>
#include <cmath>
using namespace std;

int powerof2(int n) {
    if(n == 0) {
        return 1;
    }
    return 2 * powerof2(n - 1);
}

int main() {
    cout << powerof2(5) << endl;
    return 0;
}