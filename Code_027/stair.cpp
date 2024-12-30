// problem 2 stari problem

// https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10.


#include <iostream>
using namespace std;

int countStair(int n) {
    if(n < 0) {
        return 0;
    } else if(n == 0) {
        return 1;
    }

    return (countStair(n - 1) + countStair(n - 2));
}

int main() {
    int n = 8;
    cout << countStair(n) << endl;
    return 0;
}