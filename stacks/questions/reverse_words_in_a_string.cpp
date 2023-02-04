#include<bits/stdc++.h>
using namespace std;
void reverseWords (string s)
    {
        vector<string> v;
        int j=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                string t = s.substr(j-1,i+1);
                j = i;
                v.push_back(t);
                for(auto i:v){
            cout<<i;
        }
        cout<<endl;
            }
        }
        
    }
int main()
{
    string s = "i.like.this.program.very.much";
    reverseWords(s);
    return 0;
}