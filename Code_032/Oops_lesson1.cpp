#include <iostream>
using namespace std;

// class implementation
class Hero {
/*
private :
    int health;

public:
    void getHealth() {
        cout << health << endl;
    }

    void setHealth(int h) {
        health = h;
    }
*/

public : 
    int health;
    char level;

    // creating parameterrize constructor
    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }

};

int main() {

/*
    // object of hero class
    Hero h1;
    h1.setHealth(70);
    h1.getHealth();
    //cout << "size of Object : " << sizeof(obj_1) << endl;

*/

    Hero obj_1(85, 'S');
    cout << obj_1.health << endl;
    cout << obj_1.level << endl;

    return 0;
}