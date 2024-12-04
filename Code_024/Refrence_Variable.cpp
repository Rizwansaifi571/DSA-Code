// Refernce Variable

#include <iostream>
using namespace std;


int &update1(int n) {
    int a = n;
    int &ans = a;
    return ans;
}

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

    /*
    int i = 5;
    cout << "Before " << i << endl;
    update(i);
    cout << "After " << i << endl;
    */

    int n = 5;
    cout << update1(n) << endl;



    return 0;
}