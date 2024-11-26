// Introduction to Pointer

#include <iostream>
using namespace std;

int main() {

    int num = 5;
    cout << &num << endl;    // return num address which is in hexadecimal form


    // syntax to store address
    int *ptr = &num;        // always same data type which having inn variable (in this case num is int so we save address in int.)
    
    cout << ptr << endl;    // return address of num
    cout << *ptr << endl;   // return value present at those address

    // size of pointer
    cout << sizeof(ptr) << endl;   // always return 8 for 64 bit and 4 for 32 bit because address with having specific length and storage
    
    // increment
    cout << ++(*ptr) << endl;   // increment pointer value
    cout << ++(ptr) << endl;   // move to next value of address

}