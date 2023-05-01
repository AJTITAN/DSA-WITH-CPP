#include <bits/stdc++.h> 
long long sumOfMaxAndMin(vector<int>&arr,int n,int k){
	deque<long long>maxi;
	deque<long long>mini;
	long long ans = 0;
	for(int i=0;i<k;i++){
		while(!maxi.empty() && arr[maxi.back()]<=arr[i]) maxi.pop_back();
		while(!mini.empty() && arr[mini.back()]>=arr[i]) mini.pop_back();
		maxi.push_back(i);
		mini.push_back(i);
	}
	for(int i=k;i<n;i++){
		ans+=arr[maxi.front()]+arr[mini.front()];
		while(!maxi.empty() && i-maxi.front()>=k) maxi.pop_front();
		while(!mini.empty() && i-mini.front()>=k) mini.pop_front();
		while(!maxi.empty() && arr[maxi.back()]<=arr[i]) maxi.pop_back();
		while(!mini.empty() && arr[mini.back()]>=arr[i]) mini.pop_back();
		maxi.push_back(i);
		mini.push_back(i);

	}
		ans+=arr[maxi.front()]+arr[mini.front()];
		return ans;
}
int main(){
    int n,k;
    cin>>n;
    vector<int>arr(n);
    cin>>k;
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<sumOfMaxAndMin(arr,n,k);
}