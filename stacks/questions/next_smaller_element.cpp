#include<bits/stdc++.h>
using namespace std;
vector<int> next(vector<int>arr,int n){
    vector<int>ans(n);
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    vector<int>ans(n);
    ans = next(arr,n);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}