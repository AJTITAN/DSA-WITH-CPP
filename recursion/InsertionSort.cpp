#include <iostream>
using namespace std;
void mysort(int arr[],int ind,int n){
  if(ind == n)
            return;

        int curr = arr[ind];
        int j = ind - 1;

        while(j >= 0){
            if(curr < arr[j]){ 
                arr[j + 1] = arr[j]; j--;
            }
            else 
                break;
        }
        arr[j + 1] = curr; 
        mysort(arr , ind + 1 , n);

}
int main() {
  int n,k;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  mysort(arr,1,n);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}