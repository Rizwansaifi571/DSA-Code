#include <iostream>
#include <cstring>
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
    char *name;

    // creating parameterrize constructor
    Hero(int health, char level, char name[]) {
        cout << "parameterized constructor" << endl;
        this -> name = new char[100];
        this -> health = health;
        this -> level = level;
        strcpy(this -> name, name);
    }

    Hero(Hero& temp) {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;
        this -> health = health;
        this -> level = level;
    }


    void print() {
        cout << endl << "[name : " << name << ", ";
        cout << "Health : " << health << ", ";
        cout << "Level : " << level << "] ";
        cout << endl << endl;

    }



    // Hero(Hero& temp) {
    //     cout << "copy constructor" << endl;
    //     this -> health = temp.health;
    //     this -> level = temp.level;
    // }

};

int main() {

/*
    // object of hero class
    Hero h1;
    h1.setHealth(70);
    h1.getHealth();
    //cout << "size of Object : " << sizeof(obj_1) << endl;

*/

    // Hero obj_1(85, 'S');
    // cout << obj_1.health << endl;
    // cout << obj_1.level << endl;
    
    // Hero obj_2(obj_1);
    // // Hero obj_2 = obj_1;
    // cout << obj_2.health << endl;
    // cout << obj_2.level << endl;


    char name[] = "Rizwan";
    
    Hero h1(70, 'S', name);
    
    Hero h2(h1);
    
    h1.print();
    h2.print();

    h1.name[0] = 'B';
    cout << "After Update" << endl;
    h1.print();
    h2.print();

    return 0;
}