#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left,*right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preoder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preoder(root->left);
    preoder(root->right);
}

void inOrder(node* root){
    if(root == NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(node* root){
    if(root == NULL)
        return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);

    preoder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    return 0;
}