#include<iostream>
using namespace std;
class queue{
    private:
    int *arr;
    int size;
    int front;
    int rear;
    public:
    queue(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int data){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))) return ;
        if(front==-1){
            front =0;
            rear = 0;
        }
        else if(rear==size-1 && front!=0){
            rear = 0;
        }
        else rear++;
        arr[rear] = data;
    }
    void pop(){
        if(front==-1) return ;
        if(front==rear) front = rear = -1;
        else if(front==size-1) front=0;
        else front++;
    }
    void disp(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.disp();
    q.pop();
    q.pop();
    q.push(5);
    q.disp();
    return 0;
}