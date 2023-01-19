#include <bits/stdc++.h> 
class TwoStack {
    private:
    int *arr;
    int size;
    int top1;
    int top2;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        size = s;
        top1=-1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(top2-top1>1){
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(top2-top1>1){
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1!=-1){
            int y = arr[top1];
            top1--;
            return y;
        }
        return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(top2!=size){
            int y = arr[top2];
            top2++;
            return y;
        }
        return -1;
    }
};
