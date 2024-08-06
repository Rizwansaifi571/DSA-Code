// Patterns Problems.


/*Ques 1.
1  2  3  4 
1  2  3  4 
1  2  3  4 
1  2  3  4 
*/ 

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n : ";
    cin >> n;

    int i = 1;

    while (n>=i) {
        int j = 1;
        while (j<=n) {
            cout << j << " " ;
            j += 1;
        }
        i += 1;
        cout << endl;
    }






/*Ques 2.
4  3  2  1
4  3  2  1 
4  3  2  1
4  3  2  1 
*/ 
    
    cout << "Enter n : ";
    cin >> n;

    i = 1;

    while (n>=i) {
        int j = 1;
        while (j<=n) {
            cout << n-j+1 << " " ;
            j += 1;
        }
        i += 1;
        cout << endl;
    }