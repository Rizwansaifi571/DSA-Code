// problem 3 -> a ** b ?

#include <iostream>
using namespace std;

// int power(int a, int b, int ans = 1) {

//     // base case
//     if(b == 0) {
//         return ans;
//     }

//     ans = ans * a;

//     power(a, b - 1, ans);

// }



// optimise one
int power(int a ,int b) {
    if(b == 0) 
        return 1;

    int ans = power(a, b / 2);     // 5 / 2 = 2(always int)
    
    if(b == 1) 
        return a; 

    if(b % 2 == 0)
        return ans * ans;
    
    if(b % 2 != 0)
        return a * ans * ans;
}

int main() {
    cout << power(3, 11) << endl;
    return 0;
}