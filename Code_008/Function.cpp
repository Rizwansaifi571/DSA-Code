#include <iostream>
using namespace std;

int squaring (int x) {
        int result = x * x;
        return result;
    }

int main() {
    int x;
    cin >> x ;
    cout << "Enter Number For Taking Square : ";
    cout << squaring(x) << endl;
}