#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int st, int en, int curr){
    for(int i= st;i<en;i++){
        if(inorder[i]== curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int st, int en){
    static int i = 0;
    if(st>en){
        return NULL;
    }

    int curr = preorder[i];
    i++;
    Node* node = new Node(curr);

    if(st == en){
        return node;
    }

    int pos = search(inorder,st,en,curr); 
    node->left = buildTree(preorder, inorder, st,pos-1);
    node->right = buildTree(preorder, inorder, pos+1,en);

    return node;
}

void preorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int prorder[] = {1,2,4,5,3,6,7};
    int inorder[]= {4,2,5,1,6,3,7};

    Node* node = buildTree(prorder,inorder,0,6);
    preorder(node);

}