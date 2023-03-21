#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s,int n,int i){
    if(i==n/2){
        s.pop();
        return ;
    }
    int y = s.top();
    s.pop();
    solve(s,n,i+1);
    s.push(y);
}
int main()
{
    stack<int>s;
    int ss;
    cout<<"enter the size of stack = ";
    cin>>ss;
    for(int i=0;i<ss;i++){
        int y;
        cin>>y;
        s.push(y);
    }
    solve(s,s.size(),0);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}