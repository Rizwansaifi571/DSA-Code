// static and dynamic memory allocation

#include <iostream>
using namespace std;

void element(int arr[], int n) {
    cout << "Enter the element of array : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {

    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int *arr = new int[n];
    element(arr, n);
    delete []arr;                // dealocate memory
    
    return 0;
}