#include <bits/stdc++.h>
using namespace std;
int check(int s,int i){
  if(i==0)return 1;
  if(i==1)return s;
  int ans = check(s,i/2);
  if(i%2==0) return ans*ans;
  if(i%2==1) return s*ans*ans;
}
int main() {
  int s,c;
  cin>>s>>c;
  cout<<check(s,c);
  return 0;
}