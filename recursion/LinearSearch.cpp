#include <iostream>
using namespace std;
int linear_search(int arr[],int n,int k){
  if(n==0) return 0;
  if(arr[0]==k) return 1;
  return linear_search(arr+1,n-1,k);
}
int main() {
  int n,k;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cin>>k;
  cout<<linear_search(arr,n,k);
  return 0;
}