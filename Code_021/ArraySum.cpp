#include <iostream>
using namespace std;

void RowWiseSum(int arr[][4], int row, int col) {
    cout << "Row Wise Sum --> " << endl;
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}

void ColumnWiseSum(int arr[][4], int row, int col) {
    cout << endl << "Column Wise Sum --> " << endl;
    for(int i = 0; i < col; i++) {
        int sum = 0;
        for(int j = 0; j < row; j++) {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
}

void LargestRowSum(int arr[][4], int row, int col) {
    cout << endl << "Largest Row Sum is --> " << endl;
    int max = arr[0][0];
    int rowIndex = -1;
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += arr[i][j]; 
        }
        if (sum > max) {
            max = sum;
            rowIndex = i;
        }
    }
    cout << max << " at Row index " << rowIndex << endl;

}

int main() {
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    RowWiseSum(arr, 3, 4);
    ColumnWiseSum(arr, 3, 4);
    LargestRowSum(arr, 3, 4);
    return 0;
}