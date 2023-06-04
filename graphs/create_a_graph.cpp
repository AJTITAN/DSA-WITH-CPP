#include<bits/stdc++.h>
using namespace std;
void insert(unordered_map<int,vector<int>>&mp,int u,int v,bool d){
    mp[u].push_back(v);
    if(!d) mp[v].push_back(u);
}
int main()
{
    unordered_map<int,vector<int>>mp;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,int v;
        for(int j=0;j<n;j++){
            cin>>u>>v;
            insert(mp,u,v,0);
        }
    }
    for(auto i:mp){
        cout<<i.first<<" --> ";
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<endl;
    }
    return 0;
}