#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "(){)[]()()";
    int f=1;
    stack<char> stk;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stk.push(s[i]);
        }
        else{
            if(!stk.empty()){
                if((s[i]==')' && stk.top()=='(') || (s[i]=='}' && stk.top()=='{') || (s[i]==']' && stk.top()=='[')){
                    stk.pop();
                }
                else{
                    f=0;
                    break;
                }
            }
            else{
                f=0;
                break;
            }
        }
    }
    if(f==1) cout<<"true";
    else cout<<"false";
    return 0;
}