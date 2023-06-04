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
    cout<<"enter the no. of node and vertices = ";
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
            cin>>u>>v;
            insert(mp,u,v,0);
        
    }
    cout<<"done"<<endl;
    for(auto i:mp){
        cout<<i.first<<" --> ";
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<endl;
    }
    return 0;
}
