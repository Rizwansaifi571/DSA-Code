#include <iostream>
using namespace std;

void InsertionSort(int arr[],  int size) {
    for(int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}


void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}


int main() {
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    InsertionSort(arr, 7);
    printArray(arr, 7);

    return 0;
}