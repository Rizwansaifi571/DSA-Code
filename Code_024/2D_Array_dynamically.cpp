// 2D array in dynamic way..

#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of Rows : ";
    cin >> row;
    cout << "Enter number of COlumns : ";
    cin >> col;

    int **arr = new int*[row];     // create pointer array


    // Creating 2D arrray
    for(int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    
    //Taking Input
    cout << endl << "Enter Elements : ";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    //Taking Output
    cout << endl << "Elements are : " << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // releasing Memory 
    for(int i = 0; i < row; i++) {
        delete arr[i];
    }

    delete []arr;    // erase main memory


    
    return 0;
}