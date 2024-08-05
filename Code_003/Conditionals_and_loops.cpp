// Conditionals and loops

// Example of suing nested if - else.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the a : ";
    cin >> a;

    if (a > 0){
        cout << "a is positive" << endl << endl;
    }

    else {
        cout << "a is negative" << endl;
    }



// now make more featured

    int a1;
    cout << "Enter value of a1 : " ;
    cin >> a1;

    if (a1 > 0) {
        cout << a1 << " is positive number." << endl ;
    }

    else {
        if (a1 < 0) {
            cout << a1 << " is negative number." << endl ;
        }

        else {
            cout << "a1 is zero." << endl;
        }
    }



// now for same question we use else if 

    int a11;
    cout << "Enter a11 : ";
    cin >> a11;
    cout << endl;

    if (a11 > 0){
        cout << a11 << " is greater than zero" << endl; 
    } 

    else if (a11 == 0) {
        cout << a11 << " is equal to zero" << endl;
    }

    else {
        cout << a11 <<" is negative" << endl;
    }






// While loop

// example : Find sum from 1 to n.

    int n;
    cout << "Enter the value of n : ";
    cin >> n ;
    int i = 1;
    int sum = 0;

    while (n >= i){
        sum +=  i;
        i += 1;
    }
    cout << "Sum from 1 to "<< n <<" is :" << sum << endl;


// example : Find sum of all even number from 1 to n1.
    
        int n1;
        cout << "Enter value of n1 : ";
        cin >> n1;
        i = 1;
        sum = 0;

        while (n1 >= i){
            if (i%2 == 0){
                sum += i;
            }
            i += 1;

        }
        cout << "Sum of all even number from 1 to " << n1 << " is :" << sum << endl;





// example : Find z is prime or not?

    int z;
    cout << "Enter value of z : ";
    cin >> z;
    i = 2;
    bool output = true;

    while (i < z){
        if (z%i == 0){
            output = false;
            break;
        }
        
        i += 1;
    }

    if (output == true) {
        cout << z << " is a prime number" << endl;
    } else {
        cout << z << " is not a prime number" << endl;
    }






// Pattern Questions.

/* 
Question 1 :  
 *  *  *  *  
 *  *  *  *  
 *  *  *  *
 *  *  *  *   
 */

    int p;
    int q;
    cout << "Enter value of p : ";
    cin >> p;
    cout << "Enter value of q :";
    cin >> q;
    i = 1;


    while (i <= p){
        int j = 1;
        while (j <= q){
            cout << " * " ;
            j +=1;
        }
        cout << endl;
        i+=1;
    }
    





/* 
Question 2 :  
 1  1  1  
 2  2  2  
 3  3  3  
 */


    int p1;
    cout << "Enter the value of p1 : ";
    cin >> p1;
    int q1;
    cout << "Enter the value of q1 : ";
    cin >> q1;
    i = 1;

    while (i <= p1){
        int j = 1;
        while (j <= q1){
            cout << " " << i << " " ;
            j +=1;
        }
        i +=1;
        cout << endl;
    }

}
