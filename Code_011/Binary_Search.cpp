#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end-start)/2;

        // Check if the key is present at mid
        if (arr[mid] == key) {
            cout << "Index of " << key << " is : " << mid << endl;
            return mid;  // Return the index of the found element
        }

        // If the key is greater than the mid value, search in the right half
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            // If the key is smaller than the mid value, search in the left half
            end = mid - 1;
        }
    }

    cout << "Element " << key << " not found." << endl;
    return -1;  // Return -1 if the key is not found
}

int main() {
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    BinarySearch(even, 6, 12);   // Searching for 12
    BinarySearch(even, 6, 125);   // Searching for 125 (not found)
    BinarySearch(even, 6, 2);     // Searching for 2

    BinarySearch(odd, 5 , 8);
    BinarySearch(odd, 5 , 11);
    BinarySearch(odd, 5 , 16);
    BinarySearch(odd, 5 , 116);

    return 0;
}
