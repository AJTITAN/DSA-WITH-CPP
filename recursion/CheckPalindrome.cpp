#include <bits/stdc++.h>
using namespace std;
bool check(string s,int i,int j){
  if(i>j) return true;
  if(s[i]!=s[j]) return false;
  return check(s,i+1,j-1);
}
int main() {
  string s;
  cin>>s;
  cout<<check(s,0,s.size()-1);
  return 0;
}