#include <iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void update (int *p) {
    p = p + 1;
    cout << "inside " << p << endl; 

    
}

void update2 (int *p) {
    *p = *p + 1;
    cout << "inside " << *p << endl; 

    
}


int getSum(int *arr, int n) {

    cout << sizeof(arr) << endl;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int value = 5;
    int *ptr = &value;
    
    print(ptr);


    // cout << "before " << ptr << endl;
    // update(ptr);
    // cout << "After " << ptr << endl;
    
    cout << "before " << *ptr << endl;
    update2(ptr);
    cout << "After " << *ptr << endl;

    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << getSum(arr + 3, 3) << endl;


    return 0;
}