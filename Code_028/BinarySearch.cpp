// problem 4 -> Binary Search using recursion

#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    int mid = start + (end - start) / 2;

    // base case
    if(start > end) 
        return -1;

    else if(arr[mid] == target)
        return mid;

    else if(arr[mid] < target) 
        return binarySearch(arr, mid + 1, end, target);

    else 
        return binarySearch(arr, start, mid - 1, target);
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << binarySearch(arr, 0, 8, 10) << endl;
    return 0;
}