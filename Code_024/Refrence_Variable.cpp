// Refernce Variable

#include <iostream>
using namespace std;

void update(int &n) {     // Pass by refernce
    n++;
}

int main() {
    /*
    int i = 5;
    int &j = i;

    cout << i << endl;
    cout << j << endl;
    
    cout << &i << endl;
    cout << & j << endl;

    j++;
    cout << i << endl;
    cout << j << endl;
    */

   int i = 5;
   cout << "Before " << i << endl;
   update(i);
   cout << "After " << i << endl;


    return 0;
}