// link : https://www.naukri.com/code360/problems/n-stacks-in-an-array_1164271

#include <iostream>
#include <stack>
using namespace std;

class NStack {
public:
    int *arr;
    int *top;
    int *next;

    int n, s, freespot;

    NStack(int N, int S) {
        s = S;
        n = N;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        for(int i = 0; i < n; i++) {
            top[i] = -1;
        }

        for(int i = 0; i < s; i++) {
            next[i] = i + 1;
        }
        next[s-1] = -1;

        freespot = 0;

    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(freespot == -1) return false;

        int index = freespot;
        freespot = next[index];
        arr[index] = x;
        next[index] = top[m - 1];
        top[m - 1] = index;

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if(top[m - 1] == -1) return -1;

        int index = top[m - 1];
        top[m - 1] = next[index];
        next[index] = freespot;
        freespot = index;

        return arr[index];
    }
};

int main() {
    NStack st(3, 6);  // 3 stacks, total size = 6

    // Push elements
    cout << "Push 5 to stack 1: " << st.push(5, 1) << endl;
    cout << "Push 10 to stack 2: " << st.push(10, 2) << endl;
    cout << "Push 15 to stack 1: " << st.push(15, 1) << endl;
    cout << "Push 20 to stack 3: " << st.push(20, 3) << endl;
    cout << "Push 25 to stack 2: " << st.push(25, 2) << endl;
    cout << "Push 30 to stack 1: " << st.push(30, 1) << endl;
    cout << "Push 35 to stack 3 (should fail): " << st.push(35, 3) << endl;

    // Pop elements
    cout << "Pop from stack 1: " << st.pop(1) << endl;
    cout << "Pop from stack 2: " << st.pop(2) << endl;
    cout << "Pop from stack 3: " << st.pop(3) << endl;
    cout << "Pop from stack 3 again: " << st.pop(3) << endl;

    return 0;
}
