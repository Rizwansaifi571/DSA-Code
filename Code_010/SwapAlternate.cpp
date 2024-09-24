#include <iostream>
using namespace std;

void SwapAlternate (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if (i < size-1) {
            if (i % 2 == 0) {
                int first = arr[i];
                int second = arr[i+1];
                arr[i] = second;
                arr[i+1] = first;
            }
        }    
    }
}

void PrintArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int array1[5] = {1, 2, 7, 8, 5};
    SwapAlternate(array1, 5);
    PrintArray(array1, 5);
    cout << endl << endl;


    int array2[6] = {1, 2, 3, 4, 5, 6};
    SwapAlternate(array2, 6);
    PrintArray(array2, 6);
    cout << endl << endl;

}