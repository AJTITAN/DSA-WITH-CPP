#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *build(node *root)
{
    int data;
    cout << "enter the data = ";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the left node data of "<<data<<" = " << endl;
    root->left = build(root->left);
    cout << "enter the right node data of "<<data<<" = " << endl;
    root->right = build(root->right);
    return root;
}
void preorder(node *root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void in(node *root,int& c){
    if(root==NULL) return ;
    in(root->left,c);
    if(root->left==NULL && root->right==NULL) {
        // cout<<c<<" ";
         c++;
    }
    in(root->right,c);
}
int main()
{
    node *root = NULL;
    // 1 2 -1 -1 3 -1 -1
    root = build(root);
    preorder(root);
    int c = 0;
    in(root,c);
    cout<<c;
    return 0;
}