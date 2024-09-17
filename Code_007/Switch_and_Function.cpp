#include <iostream>
using namespace std;

int main() {
    cout << "Enter the amount : ";
    int n;
    cin >> n;

    // Calculate notes
    if (n >= 100) {
        int hundred_notes = n / 100;
        cout << "100 Rs Notes : " << hundred_notes << endl;
        n = n - (hundred_notes * 100);
    }

    if (n >= 50) {
        int fifty_notes = n / 50;
        cout << "50 Rs Notes : " << fifty_notes << endl;
        n = n - (fifty_notes * 50);
    }

    if (n >= 20) {
        int twenty_notes = n / 20;
        cout << "20 Rs Notes : " << twenty_notes << endl;
        n = n - (twenty_notes * 20);
    }

    if (n >= 1) {
        int one_notes = n / 1;
        cout << "1 Rs Notes : " << one_notes << endl;
        n = n - (one_notes * 1);
    }

    if (n == 0) {
        cout << "Thank you !!" << endl;
    } else {
        cout << "Something went wrong!!" << endl;
    }

}