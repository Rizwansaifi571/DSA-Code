// problem 2 -> sum of array

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {

    // base case
    if(size == 0) {
        return 0;
    }

    return arr[0] + sumArray(arr + 1, size - 1);
}

int main() {
    int arr[] = {3, 2, 5, 1, 6};
    cout << sumArray(arr, 5) << endl;
    return 0;
}