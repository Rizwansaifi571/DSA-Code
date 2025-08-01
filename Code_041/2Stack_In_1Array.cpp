// link : https://www.naukri.com/code360/problems/two-stacks_983634?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb


#include <iostream> 
using namespace std;


class TwoStack {
    int *arr;
    int size;
    int top1;
    int top2;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this -> size = s;
        arr = new int[size];
        top1 = -1;
        top2 = s;
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;

        }
        else return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;

        }
        else return -1;
    }
};
