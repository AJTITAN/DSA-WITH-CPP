#include <bits/stdc++.h>
using namespace std;
void reverse(string &s,int i,int n){
  if(i>(n-1)/2) 
  return ;
  swap(s[i],s[n-i-1]);
  reverse(s,i+1,n);
}
// void reverse(string &s,int i,int j){
//   if(i>j) 
//   return ;
//   swap(s[i],s[j]);
//   reverse(s,i+1,j-1);
// }
int main() {
  string s;
  cin>>s;
  reverse(s,0,s.size());
  cout<<s;
  return 0;
}