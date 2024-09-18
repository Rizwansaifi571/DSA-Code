#include <iostream>
using namespace std;

int squaring (int x) {
        int result = x * x;
        return result;
    }


int ncr (int n, int r) {
    int n_r = n - r;
    int nfact, rfact, n_rfact = 1;
    for(nfact = 1; n >= 1; n--) {
        nfact = n * nfact;
    }
    for(rfact = 1; r >= 1; r--) {
        rfact = r * rfact;
    }
    for(n_rfact = 1; n_r >= 1; n_r--) {
        n_rfact = n_r * n_rfact;
    }

    int result = nfact / (rfact * n_rfact);
    return result;

}

int main() {
    int x;
    cout << "Enter Number For Taking Square : ";
    cin >> x ;
    cout << squaring(x) << endl;


    int n, r;
    cout << "Enter n, r : ";
    cin >> n >> r ;
    cout << "Your " << n << "C" << r << " value is : "<<endl;
    cout << ncr(n, r) << endl;
}