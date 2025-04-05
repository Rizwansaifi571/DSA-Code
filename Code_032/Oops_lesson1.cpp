#include <iostream>
using namespace std;

// class implementation
class Hero {
private :
    int health;

public:
    void getHealth() {
        cout << health << endl;
    }

    void setHealth(int h) {
        health = h;
    }
};

int main() {

    // object of hero class
    Hero h1;
    h1.setHealth(70);
    h1.getHealth();
    //cout << "size of Object : " << sizeof(obj_1) << endl;

    return 0;
}