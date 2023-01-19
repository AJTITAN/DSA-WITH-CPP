#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
    int size;
    int *arr;
    int top;

public:
    Stack(int s)
    {
        size = s;
        arr = new int[size];
        top = -1;
    }
    void push(int d)
    {
        if (top == size - 1)
        {
            return;
        }
        top++;
        arr[top] = d;
    }
    void pop()
    {
        if (top == -1)
        {
            return;
        }
        top--;
    }
    int peek()
    {
        if (top == -1 || top >= size)
        {
            
        }
        else 
        return arr[top];
    }
    void disp()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.disp();
    s.pop();
    s.disp();
}