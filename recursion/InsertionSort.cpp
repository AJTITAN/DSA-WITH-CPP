#include <iostream>
using namespace std;
void mysort(int arr[],int i,int n){
  if(i==n) return ;
  int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
  mysort(arr,i+1,n);
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