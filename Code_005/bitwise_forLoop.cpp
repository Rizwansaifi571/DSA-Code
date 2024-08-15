// Bitwise and for loop 


/*BITWISE OPERATOR*/

#include <iostream>
using namespace std;
int main() {

    int a = 4;
    int b = 6;

    cout << "a & b : " << (a&b) << endl;
    cout << "a | b : " << (a|b) << endl;
    cout << "~ a : " << (~a) << endl;
    cout << "a ^ b : " << (a^b) << endl;
    cout << "a << 1 : " << (a<<1) << endl;
    cout << "a << 2 : " << (a<<2) << endl;  
    cout << "a >> 1 : " << (a>>1) << endl;
    cout << "a >> 2 : " << (a>>2) << endl;

// Increment & Decrement.
    cout << "a++ : " << a++ << endl;
    cout << "++a : " << ++a << endl;
    cout << "a-- : " << a-- << endl;
    cout << "--a : " << --a << endl;


// For loop

//Ques. Printing number for 1 to n.
    int n;
    cout << "Enter tha value of n : ";
    cin >> n;

    for (int i = 1; n >=i; i++) {
        cout << i << endl;
    }

// Same question with different approach.
    cout << "Enter tha value of n : ";
    cin >> n;

    int i = 1;
    for (; ;){
        if (n >= i) {
            cout << i << endl;
            i++;
        }
        else {
            break;
        }
    }


// Ques: Print sum for 1 to n.
    cout << "Enter n : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; n >= i; i++) {
        sum += i; 
    }
    cout << "Sum for 1 to n : " << sum << endl;



// Ques: Print fibonacci series.
    cout << "Enter n : ";
    cin >> n;
    
    a = 0;  
    b = 1;
    cout << a << " " << b;

    for (int i = 1; n >= i; i++) {
        int sum  = a + b;
        cout << " " << sum; 
        a = b;
        b = sum; 
    }
    cout << endl;




// Ques : Print number is prime or not.
    cout << "Enter n : ";
    cin >> n;
    bool check = 1;

    for (int i = 2; n > i; i++) {
        if (n % i == 0) {
            cout << n << " is not a prime number." << endl;
            check = 0;
            break;
        }
        else {
            check = 1;
        }
    }

    if (check == 1){
        cout << n << " is an prime number." << endl; 
    }


// Ques : Give example of continue stament.

    for (int i = 0; i < 5; i++) {
        cout << "Hi" << endl;
        cout << "Hey" << endl;
        continue;

        cout << "Reply" << endl;
    }


}   



