#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swaped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swaped = true;
            }
        }
        // If no elements were swapped, array is already sorted
        if (swaped == false) {
            break;
        }
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main() {
    int arr[6] = {10, 1, 7, 6, 14, 9};
    bubbleSort(arr, 6);
    printArray(arr, 6);
    return 0;
}