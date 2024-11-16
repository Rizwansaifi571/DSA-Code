
#include <iostream>
using namespace std;


// length of character array
int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}


// Reverse the character array
void reverse(char name[]) {
    int start = 0;
    int end = 0;
    while(name[end] != '\0') {
        end++;
    }
    while(start < end) {
        swap(name[start], name[end-1]);
        start++;
        end--;
    }
    cout << name << endl;
}


int main() {
    char name[20];
    cout << "Enter Your Name : ";
    cin >> name;

    cout << name << endl;
    cout <<"Length of " << name <<" is : "<< getLength(name) << endl;
    cout <<"Reverse of " << name <<" is : ";
    reverse(name);
    cout << endl;
    return 0;
}