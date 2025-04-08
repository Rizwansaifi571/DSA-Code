#include <iostream>
using namespace std;

class Human {
    
    public :
    int weight;
    int age;
    int height;

    public :
    void setweight(int w) {
        weight = w;
    } 
};

class Male : public Human {
    public :
    string color;

    void sleep() {
        cout << "TO Lezzy!!" << endl;
    }
};

int main() {
    
    Male object1;

    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    cout << object1.color << endl;
    object1.setweight(67);
    cout << object1.weight << endl;
    object1.sleep();
    return 0;
}