// problem -> 4 (bubble sort using recursion)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {

    // base case
    if(size == 0 || size == 1) 
        return;
    

    for(int i = 0; i < size - 1; i++)
        if(arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);

    bubbleSort(arr, size - 1);
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {    
    int arr[] = {1, 5, 9, 6, 2, 34, 11};
    bubbleSort(arr, 7);
    printArray(arr, 7);

    return 0;
}