// link : https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908

#include <iostream>
using namespace std;

class Queue {
public:
    int* arr;
    int qfront;
    int rear;
    int size;
    Queue(int s = 10001) {
        size = s;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }


    bool isEmpty() {
        if(qfront == rear) return true;
        return false;
    }

    void enqueue(int data) {
        if(rear == size) cout << "Queue OverFlow!!" << endl;
        else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(rear == qfront) {
            cout << "Queue UnderFlow!! : ";
            return -1;
        }
        else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear) {
                qfront = 0;
                rear = 0;
            }
            return ans; 
        }
    }

    int front() {
        if(qfront == rear) return -1;
        return arr[qfront];
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    cout << "Front: " << q.front() << endl; // 10

    cout << "Dequeued: " << q.dequeue() << endl; // 10
    cout << "Front: " << q.front() << endl; // 20

    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // Should print overflow
}
