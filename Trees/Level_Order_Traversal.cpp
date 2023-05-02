#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int a){
        data = a;
        this->left = NULL;
        this->right = NULL;
    }

};
node* Build(node* &root){
    cout<<"enter the data = ";
    int d;
    cin>>d;
    if(d==-1) return NULL;
    root = new node(d);
    cout<<"enter the left node of "<<d<<" = ";
    root->left = Build(root->left);
    cout<<"enter the right node of "<<d<<" = ";
    root->right = Build(root->right);
    return root;
}
void level(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
            q.pop();
        // if(temp==NULL){
        //     cout<<endl;
        //     if(!q.empty()){
        //         q.push(NULL);
        //     }
        // }
        // else{
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        
    }
}
int main()
{
    node* root = NULL;
    root = Build(root);
    level(root);
    return 0;
}