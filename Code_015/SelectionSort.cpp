#include <iostream>
using namespace std;

void selectionsort(int arr[], int size) {
    for(int i = 0; i < size-1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < size; j++) {
            if (arr[minIndex] > arr[j]) 
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size ; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    selectionsort(arr, 5);
    printArray(arr, 5);
    return 0;
}