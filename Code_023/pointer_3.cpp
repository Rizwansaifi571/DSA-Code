// Double Pointers

#include <iostream>
using namespace std;


void update (int **p) {
    // p = p + 1;   // no change
    // *p = *p + 1  // ptr change only
    **p = **p + 1;  // i increment with 1
}

int main() {

    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    // cout << &ptr << endl;
    // cout << ptr2 << endl;
    
    // cout << ptr << endl;
    // cout << &i << endl;

    // cout << i << endl;
    // cout << *ptr << endl;
    // cout << **ptr2 << endl;

    cout << "Before " << i << endl;
    cout << "Before " << ptr << endl;
    cout << "Before " << ptr2 << endl;
    update(ptr2);
    cout << "After " << i << endl;
    cout << "After " << ptr << endl;
    cout << "After " << ptr2 << endl;


    return 0;

}
