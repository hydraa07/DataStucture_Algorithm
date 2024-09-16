#include<iostream>
using namespace std;
class Node{
    int data;
    Node * left;
    Node * right;
    
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node * build_tree(Node * root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"enter the data for inserting in left"<<endl;
    root->left = build_tree(root->left);

    cout<<"enter the data for inserting in right"<<endl;
    root->left = build_tree(root->right);

    return root;
}

int main(){
    Node * root = NULL;

    // create tree
    root = build_tree(root);
    return 0;
}