#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *top = NULL;
void push(int d)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = d;
    temp->next = NULL;
    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}
void pop()
{
    if (top == NULL)
    {
        return;
    }
    else
    {
        top = top->next;
    }
}
void disp()
{
    node *temp = top;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    disp();
    pop();
    pop();
    pop();
    disp();
    return 0;
}