#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>arr,int n){
    unordered_map<int,int>mp;
    for(auto i:arr){
        mp[i]++;
    }
    for(auto i:mp){
        if(i.second>1) return 1;
    }
    return 0;
}
int main() {
  int n,k;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<check(arr,n)<<endl;
 
  return 0;
}