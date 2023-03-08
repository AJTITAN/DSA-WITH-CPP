#include <iostream>
using namespace std;
<<<<<<< HEAD
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

=======
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
>>>>>>> 12eb896a2ad54b785af8ae5fd135a570d555a8ba
}
int main() {
  int n,k;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
<<<<<<< HEAD
  mysort(arr,1,n);
=======
  mysort(arr,n);
>>>>>>> 12eb896a2ad54b785af8ae5fd135a570d555a8ba
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}