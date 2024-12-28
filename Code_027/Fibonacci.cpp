//Ques 1 of Recursion part.

#include <iostream>
using namespace std;

void fibo(int first, int second, int n) {
    if (n == 1) {
        cout << n << "th Fibonacci digit is " << first << endl;
        return;
    }
    if (n == 2) {
        cout << n << "th Fibonacci digit is " << second << endl;
        return;
    }

    fibo(second, first + second, n - 1);
}

int main() {
    int n = 8; // Find the 8th Fibonacci number
    fibo(0, 1, n);
    return 0;
}
