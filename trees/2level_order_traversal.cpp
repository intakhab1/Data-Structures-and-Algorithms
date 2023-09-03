#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

void printLevelOrderTraversal(node* root){  // 1 2 3 4 5 6 7 8
    if(root == NULL) return ;
    queue<node*> q;  // Create an empty queue for level order traversal
    q.push(root);  //insert root

    while(q.empty() == false){ 
        node* temp = q.front();
        cout<<temp->data<<" "; // Print front of queue and remove it from queue
        q.pop();

        if(temp->left != NULL){ // insert left child in queue
           q.push(temp->left); 
        }
        if(temp->right != NULL){  // insert right child in queue
            q.push(temp->right);
        }
    }
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->left = new node(8);
    printLevelOrderTraversal(root);
}