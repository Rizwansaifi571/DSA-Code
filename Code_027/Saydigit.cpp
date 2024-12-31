// problem 3/

#include <iostream>
using namespace std;

void saydigit(string arr[], int value) {
    if(value == 0) {
        return;
    }

    int digit = value % 10;
    saydigit(arr, value / 10);

    cout << arr[digit] << " ";
}

int main() {
    string arr[] = {"zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    saydigit(arr, 412);
    return 0;
}