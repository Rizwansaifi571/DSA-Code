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

int main() {\
    cout << "Enter size of an array : " ;
    int arr[100];
    int size;
    cin >> size;
    for(int i = 0; i < size; i++) {
        cout << "Enter the Element :" ;
        cin >> arr[i];
    }

    getMinandMax(arr, size);
    
    } 
