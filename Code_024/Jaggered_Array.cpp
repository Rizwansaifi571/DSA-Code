// Jagered Array
/*
A jagged array (also known as a "ragged array") is an array of arrays where the sub-arrays can have different lengths
example
int[][] jaggedArray = {
    {1, 2, 3},      // 1st row contain 3 elements
    {4, 5},         // 2nd row contain 3 elements
    {6, 7, 8, 9}    // 3rd row contain 4 elements
};

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row, col;
    vector<int> temp;

    cout << "Enter the number of Rows : ";
    cin >> row;

    // 2d Array and user input
    int **arr = new int*[row];  
    for(int i = 0; i < row; i++) {
        cout << "Enter number of elements for row " << i + 1 << " ";
        cin >> col;
        temp.push_back(col);
        arr[i] = new int[col];
    }

    // User input
    for(int i = 0; i < row; i++) {
        cout << "Enter " << temp[i] << " elements for row  "<< i + 1 << " : ";
        for(int j =0; j < temp[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // print elements
    cout << endl << "Printing Elements : " << endl;
    for(int i = 0; i < row; i++) {
        for(int j =0; j < temp[i]; j++) {
            cout << arr[i][j] <<  " ";
        }
        cout << endl;
    }

    // releasing memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete []arr;




    return 0;
}