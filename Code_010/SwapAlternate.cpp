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


void SwapAlternate2 (int arr[], int size) {
    for(int i = 0; i < size; i += 2) {
        if (i < size-1) {
            int first = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = first;
            
        }    
    }
}

void PrintArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }cout << endl << endl;
}

int main() {

    int array1[5] = {1, 2, 7, 8, 5};
    // SwapAlternate(array1, 5);
    SwapAlternate2(array1, 5);
    PrintArray(array1, 5);



    int array2[6] = {1, 2, 3, 4, 5, 6};
    // SwapAlternate(array2, 6);
    SwapAlternate2(array2, 6);
    PrintArray(array2, 6);

}