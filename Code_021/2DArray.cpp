#include <iostream>
using namespace std;

// user input

int main() {

    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 22222}, {3, 33, 333, 33333}};

    cout << "Enter Elements row wise : " ;
    int arr[3][4];
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    /*
    cout << "Enter Elements col wise: " ;
    int arr[3][4];
    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[j][i];
        }
    }
    */
    cout << endl << "Printing Elements : " << endl;
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;


}


