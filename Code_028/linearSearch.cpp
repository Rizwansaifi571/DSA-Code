// problem 3 -> Linear Search using recusion

#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int target) {
    // base case
    if(size == 0) {
        return 0;
    }
    else if(arr[0] == target) {
        return 1;
    }
    else {
        return LinearSearch(arr + 1, size - 1, target);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int ans = LinearSearch(arr, 6, 4);
    if (ans)
        cout << "Element is present" << endl;
    else {
        cout << "Element is not present" << endl;
    }
    return 0;
}