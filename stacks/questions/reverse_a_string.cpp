#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> stk;
    for(auto i:s){
        stk.push(i);
    }
    s="";
    while(!stk.empty()){
        s.push_back(stk.top());
        stk.pop();
    }
    cout<<s;
    return 0;
}