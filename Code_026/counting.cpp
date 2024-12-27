#include <iostream>
using namespace std;

void reverseCounting(int n) {
    if(n == 0) {
        return;
    }

    cout << n << " ";

    reverseCounting(n - 1); 
}



void Counting(int n) {
    if(n == 0) {
        return;
    }

    Counting(n - 1); 

    cout << n << " ";
}


int main() {
    reverseCounting(5);
    cout << endl << endl;
    Counting(5);
    return 0;
}