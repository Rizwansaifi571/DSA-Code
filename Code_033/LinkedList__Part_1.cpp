#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = nullptr;
    }
};

int main() {
    // dyanmically
    Node* node1 = new Node(99);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    // statical
    // Node node1(99);
    // cout << node1.data << endl;
    // cout << node1.next << endl;
    return 0;
}