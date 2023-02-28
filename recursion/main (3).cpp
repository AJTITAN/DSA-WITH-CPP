#include <iostream>
using namespace std;
int binary_search(int arr[],int s,int e,int k){
  if(s>e) return 0;
  int m = s+(e-s)/2;
  if(arr[m]==k) return 1;
  if(arr[m]<k)
  return binary_search(arr,m+1,e,k);
  if(arr[m]>k)
  return binary_search(arr,s,m-1,k);
}
int main() {
  int n,k;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cin>>k;
  cout<<binary_search(arr,0,n-1,k);
  return 0;
}