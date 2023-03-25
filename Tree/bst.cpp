#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
} ;

Node* insertBST(Node *root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left = insertBST(root->left,val);
    }else{
        root->right = insertBST(root->right,val);
    }
    return root;
}
void inorder(struct Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* searchInBST(Node* root, int key){

    if(root == NULL){
        return root;
    }

    if(root->data == key){
        return root;
    }
    if(root->data>key){
        return searchInBST(root->left,key);
    }

    return searchInBST(root->right,key);
}
Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr &&curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}
Node* deleteInBST(Node* root, int key){
    if(key < root->data){
        root->left = deleteInBST(root->left,key);
    }
    else if(key > root->data){
        root->right = deleteInBST(root->right,key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right,temp->data);
    }

    return root;
}



int main(){

    Node *root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    // inorder(root);
    // if(searchInBST(root,10) == NULL){
    //     cout<<"key doesn't exist";
    // }else{
    //     cout<<"key exist";
    // }
    inorder(root);
    root = deleteInBST(root,5);
    inorder(root);
     
    return 0;
}