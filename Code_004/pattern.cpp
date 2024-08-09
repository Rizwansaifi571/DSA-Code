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



/*Ques 3.
1  2  3
4  5  6  
7  8  9 
*/ 
    
    cout << "Enter n :";
    cin >> n;
    i = 1;
    int count = 1;

    while (i <= n) {
        int j = 1;
        while (j <= n){
            cout << count << " ";
            count += 1;
            j += 1;
        }
        i += 1;
        cout << endl;
    }



/*Ques 4.
9  8  7
6  5  4   
3  2  1
*/ 
    
    cout << "Ener n : ";
    cin >> n;
    i = 1;
    count = n * n;

    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << count << " ";
            count -= 1;
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 5.
* 
* *
* * *
* * * *
*/ 
    
    cout << "Enter the n : ";
    cin >> n;
    i = 1;

    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << "*" << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 6.
1 
2 2
3 3 3
4 4 4 4
*/ 
    
    cout << "Enter the n : ";
    cin >> n;
    i = 1;

    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << i << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 7.
1 
2 3
4 5 6
7 8 9 10
*/ 
    
    cout << "Enter the n : ";
    cin >> n;
    i = 1;
    count = 1;

    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << count << " ";
            j += 1;
            count += 1;
        }
        i += 1;
        cout << endl;
    }
    


/*Ques 8.
1 
2 3
3 4 5
4 5 6 7
*/ 
    
    cout << "Enter n : " ;
    cin >> n;
    i = 1;
    
    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << i+j-1 << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }

    
    
/*Ques 9.
1 
2 1
3 2 1
4 3 2 1
*/ 
    
    cout << "Enter n : " ;
    cin >> n;
    i = 1;
    
    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << i-j+1 << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 10.
A A A
B B B
C C C
*/ 
    
    cout << "Enter n :";
    cin >> n;
    i = 1;
    cout << int("A") << endl;
    
    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << char(65+i-1) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 11.
A B C 
A B C
A B C
*/ 
    
    cout << "Enter n : ";
    cin >> n ;
    i = 1;

    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << char(65 + j -1) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }



/*Ques 12.
A B C 
D E F
G H I
*/ 
    
    cout << "Enter n : ";
    cin >> n;
    i = 1;
    char alph = 'A';

    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << alph << " ";
            count += 1 ;
            j += 1 ;
        }
        i += 1 ;
        cout << endl;
    }


/*Ques 13.
A B C 
B C D
C D E
*/ 
    
    cout << "Enter n : " ;
    cin >> n;
    i = 1;

    while (i <= n) {
        int j = 1;
        while (j <=n) {
            cout << char(i+j+65-2) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }

/*Ques 14.
A
B B
C C C
*/ 
    
    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << char(65+i-1) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 15.
A
B C
D  E  F
G  H  I  J
*/ 
    
    cout << "Enter n : ";
    cin >> n;
    i = 1;
    char alph = 'A';

    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << alph << " ";
            alph += 1;
            j += 1;
        }
        i += 1;
        cout << endl;
    }

/*Ques 16.
A 
B C
C D E
D E F G
*/ 
    
    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << char(i+j+65-2) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 16.
D 
C D
B C D
A B C D
*/ 
    /*
    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << char(j+65+n-1-i) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 17.
      *
    * *
  * * *
* * * *
*/ 
    /*
    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while (i <= n) {
        int space = 1;
        while (space <= n-i) {
            cout << " " ;
            space += 1;
        }
        int j = 1;
        while (j <= i) {
            cout << "*";
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 18.
* * * * 
* * *
* *
*
*/ 

    /*
    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while(i <= n) {
        int j = 1;
        while(j <= n-i+1) {
            cout << "* " ;
            j += 1;
        }
        i += 1;
        cout << endl;
    }



/*Ques 19.
* * * * 
  * * *
    * *
      *
*/ 
    /*
    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while(i <= n) {
        int space = 1;
        while (space <= i-1) {
            cout << " ";
            space += 1;
        }
        int j = 1;
        while (j <= n-i+1) {
            cout << "*" ;
            j += 1;
        }
        i += 1;
        cout << endl;
    }



/*Ques 20.
1111
 222
  33
   4
*/ 
    /*
    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while(i<=n) {
        int space = 1;
        while (space <= i-1) {
            cout << " ";
            space += 1;
        }
        int j = 1;
        while (j <=n-i+1) {
            cout << i ;
            j += 1 ;
        }
        i += 1;
        cout << endl;
    }


/*Ques 21.
   1
  22
 333
4444
*/ 
    /*
    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while(i <= n) {
        int space = 1;
        while (space <= n-i) {
            cout << " ";
            space += 1;
        }
        int j = 1;
        while (j <= i){
            cout << i ;
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 22.
      1 
    2 3 
  4 5 6 
7 8 9 10
*/ 
    /*
    cout << "Enter n : ";
    cin >> n;
    i = 1;
    int count = 1;

    while(i <= n) {
        int space = 1;
        while (space <= n-i) {
            cout << "  ";
            space += 1;
        }
        int j = 1;
        while (j <= i){
            cout << count << " ";
            count += 1;
            j += 1;
        }
        i += 1;
        cout << endl;
    }


/*Ques 23.
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/ 
    /*
    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while (i <= n) {
        int space = 1;
        while (space <= n-i) {
            cout << "  ";
            space += 1;
        }
        int j = 1;
        int count = 1;
        while (j <= i) {
            cout << count << " ";
            count += 1;
            j += 1;
        }
        j = 1;
        while (j <= i-1){
            cout << i-j << " ";
            j += 1;
        }
        i += 1;
        cout <<endl;
    } 


/*Ques 24.
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/ 

    cout << "Enter n : ";
    cin >> n;
    i = 1;

    while (i <= n) {
        int j = 1;
        while (j <= n-i+1) {
            cout << j << " ";
            j +=1;
        }
        j =1;
        while (j <= (i-1)*2) {
            cout << "* " ;
            j += 1;
        }
        j = n-i+1;
        while (j >= 1) {
            cout << j << " ";
            j -= 1;
        }
        i += 1;
        cout << endl;
    }

}


