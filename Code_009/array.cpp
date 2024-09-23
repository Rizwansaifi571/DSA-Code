#include <iostream>
using namespace std;

void getMinandMax (int arr[], int n) {
    int min = INT8_MAX;
    int max = INT8_MIN;
    for(int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        } if (min > arr[i]) {
            min = arr[i];
        }
    }
    cout << "Minimum element of an array : " << min << endl << endl;
    cout << "Maximum element of an array : " << max << endl << endl;
}





void ReverseArray (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int first = arr[i];
        int last = arr[n-i-1];
        if (i >= n-i-1) {
            break;
        } else {
            arr[n-i-1] = first;
            arr[i] = last;
        }
    }
}



int main() {
    cout << "Enter size of an array : " ;
    int arr[100];
    int size;
    cin >> size;
    for(int i = 0; i < size; i++) {
        cout << "Enter the Element :" ;
        cin >> arr[i];
    }

    getMinandMax(arr, size);


    int arr1[5] = {1, 2, 3, 4, 5};
    ReverseArray(arr1, 5);
    for (int i = 0; i < 5; i++){
        cout << arr1[i] << " " ;
    } cout << endl;


    int arr2[6] = {2, 4, 6, 8, 10, 12};
    ReverseArray(arr2, 6);
    for (int i = 0; i < 6; i++){
        cout << arr2[i] << " " ;
    }
    
    
    } 
