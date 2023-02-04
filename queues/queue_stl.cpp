#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;

    return 0;
}