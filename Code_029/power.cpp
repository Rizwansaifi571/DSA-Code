// problem 3 -> a ** b ?

#include <iostream>
#include <cmath>
using namespace std;

int power(int a, int b, int ans = 1) {

    // base case
    if(b == 0) {
        return ans;
    }

    ans = ans * a;

    power(a, b - 1, ans);

}

int main() {
    cout << power(2, 10) << endl;
    return 0;
}