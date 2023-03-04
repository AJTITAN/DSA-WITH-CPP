#include <iostream>
using namespace std;
void mysort(int arr[],int n){
    int c=0;
    for(int i=1;i<n;i++){
        int k = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>k){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
        c++;
    }
    cout<<c<<endl;
}
int main() {
  int n,k;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  mysort(arr,n);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}