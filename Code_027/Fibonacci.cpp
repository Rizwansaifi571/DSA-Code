//Ques 1 of Recursion part.

#include <iostream>
using namespace std;

int fibonacci(int n) {

    if(n == 0) {
        return 0;
    } if(n == 1) {
        return 1;
    }

    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}

int main() {
    int n = 8;
    cout << fibonacci(8) << endl;
    return 0;
}
