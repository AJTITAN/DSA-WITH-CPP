#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int a){
        data = int a;
        this->left = NULL;
        this->right = NULL;
    }

};
node* Build(node* &root){
    cout<<"enter the data = ";
    int d;
    cin>>d;
    if(d==-1) return NULL;
    roo = new node(d);
    cout<<"enter the left node of "<<d<<" = ";
    root->left = Build(root->left);
    cout<<"enter the right node of "<<d<<" = ";
    root->right = Build(root->right);
    return root;
}
void post(node* root){
    if(root){
        pos(root->left);
        cout<<root->data;
        pos(root->right);
    }
}
int main()
{
    node* root = NULL;
    root = build(root);
    post(root);
    return 0;
}