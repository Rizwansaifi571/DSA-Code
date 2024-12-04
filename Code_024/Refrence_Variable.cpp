// Refernce Variable

#include <iostream>
using namespace std;

int main() {

    int i = 5;
    int &j = i;

    cout << i << endl;
    cout << j << endl;
    
    cout << &i << endl;
    cout << & j << endl;

    j++;
    cout << i << endl;
    cout << j << endl;

    return 0;
}