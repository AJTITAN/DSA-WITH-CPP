#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>&arr,int s,int e){
    int m = (s+e)/2;
    vector<int>temp1;
    vector<int>temp2;
    int k=s;
    for(int i=0;i<m-s+1;i++) temp1.push_back(arr[k++]);
    for(int i=0;i<e-m;i++) temp2.push_back(arr[k++]);
    int i=0,j=0;
     k=s;
    while(i<temp1.size() && j<temp2.size()){
        if(temp1[i]<temp2[j]){
            arr[k++] = temp1[i];
            i++;
        }
        else{
            arr[k++] = temp2[j];
            j++;
        }
    }
    while(i<temp1.size()){
         arr[k++] = temp1[i];
            i++;
    }
    while(j<temp2.size()){
        arr[k++] = temp2[j];
            j++;
    }
}
void MergeSort(vector<int>&arr,int s,int e){
    if(s>=e) return ;
    MergeSort(arr,s,(s+e)/2);
    MergeSort(arr,(s+e)/2+1,e);
    Merge(arr,s,e);
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}