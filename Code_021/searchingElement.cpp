#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) { // col dena pdega
    for(int i = 0; i < (row * col); i++) {
        if (arr[row][col] == target) {
            return 1;
        }
    }
    return 0;
    
}

int main() {


    cout << "Enter Elements row wise : " ;
    int arr[3][4];
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl << "Printing Elements : " << endl;
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    cout << endl;
    cout << "Enter Element to Search : ";
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)) {
        cout << "Element is present" << endl;
    } else {
        cout << "Element is not found!!" << endl;
    }

    return 0;


}


