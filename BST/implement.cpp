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

node* insert(node* root,int val){
    if(root==NULL)
        return new node(val);

    if(val < root->data)
        root->left = insert(root->left,val);

    if(val>root->data)
        root->right = insert(root->right,val);

    return root;
}

void inorder(node* root){
    if(root == NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preOrder(node* root){
    if(root==NULL)
        return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node* search(node* root,int key){
    if(root==NULL || root->data == key){
        return root;
    }

    if(root->data < key){
        return search(root->right,key);
    }

    if(root->data > key){
        return search(root->left,key);
    }

    return new node(-1);
}

int main()
{
    node* root = new node(5);
    insert(root,1);
    insert(root,3);
    insert(root,4);
    insert(root,2);
    insert(root,7);

    inorder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postorder(root);
    cout<<endl<<search(root,10);
    return 0;
}