#include <iostream>
using namespace std;

void FindUnique () {
    cout << "Enter TestCases :";
    int test;
    cin >> test;
    
    for (int i = 0; i < test; i++) {
        cout << "Enter SizeArray : ";
        int sizeArray;
        cin >> sizeArray;
        
        int arr[100];
        for (int j = 0; j < sizeArray; j++) {
            cin >> arr[j];
        
        }
        
        int unique = 0;
        for (int i = 0; i < sizeArray; i++) {
            unique = unique^arr[i];
        }
        cout << unique << endl;
        
        

    }
}

int main() {
    FindUnique();
}