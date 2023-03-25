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

Node* buildTree(int posorder[], int inorder[], int st, int en){
    static int i = 6;
    if(st>en){
        return NULL;
    }

    int curr = posorder[i];
    i--;
    Node* node = new Node(curr);

    if(st == en){
        return node;
    }

    int pos = search(inorder,st,en,curr); 
    node->right = buildTree(posorder, inorder, pos+1,en);
    node->left = buildTree(posorder, inorder, st,pos-1);
    

    return node;
}

void postorder(struct Node* root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    int posorder[] = {4,5,2,6,7,3,1};
    int inorder[]= {4,2,5,1,6,3,7};

    Node* node = buildTree(posorder,inorder,0,6);
    postorder(node);

}