// problem 1 of day 3 
// check array is sorted or not

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    // base case
    if(size == 0 || size == 1) {
        return true;
    } else if(arr[0] > arr[1]) {
        return false;
    } else {
        return isSorted(arr + 1, size - 1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 5};
    bool ans = isSorted(arr, 8);
    if(ans) {
        cout << "Array is Sorted" << endl;
    }
    else 
        cout << "Array is not sorted" << endl;
    return 0;
}