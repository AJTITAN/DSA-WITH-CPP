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
        front = 0;
        rear = 0;
    }
    void push(int d){
        if(rear==size) return ;
        arr[rear++] = d;
    }
    void pop(){
        if(front==rear) return ;
        arr[front] = -1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
    }
    void disp(){
        for(int i=front;i<rear;i++){
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
    q.disp();
    q.pop();
    q.pop();
    q.pop();
    q.push(5);
    q.disp();
    return 0;
}