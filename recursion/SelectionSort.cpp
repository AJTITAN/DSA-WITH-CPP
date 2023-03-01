#include <iostream>
using namespace std;
void mysort(int arr[],int ind,int n){
  if(ind==n) return ;
  int mini = ind;
  for(int i=mini+1;i<n;i++){
    if(arr[i]<arr[mini]){
        mini = i;
    }
  }
  swap(arr[mini],arr[ind]);
  mysort(arr,ind+1,n);

}
int main() {
  int n,k;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  mysort(arr,0,n);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}