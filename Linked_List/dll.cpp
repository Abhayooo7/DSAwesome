#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);

    n->next = head;
    if(head != NULL){
        head->prev = n;
    }
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        insertAtHead(head,val);
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;

}

void insertAfterIndex(node* &head, int val, int k){

    node* n = new node(val);
    int c =1;
    node* temp = head;

    while(temp != NULL && c<k){
        temp = temp->next;
        c++;
    }
    temp->next->prev = n;
    n->next = temp->next;
    temp->next = n;
    n->prev = temp;

}
void deleteHead(node* &head){
    node* toDelete = head;

    head= head->next;
    head->prev=NULL;

    delete toDelete;
}

void deleteNode(node* &head, int pos){
    
    if(pos == 1){
        deleteHead(head);
        return;
    }
    int c =1;
    
    node* temp = head;

    while(temp != NULL && c != pos ){
        temp = temp->next;
        c++;
    }

    temp->prev->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }
    delete temp;

}
void display(node* head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head = NULL;

    insertAtHead(head,4);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,9);
    insertAtHead(head,6);
    insertAtHead(head,3);
    insertAtTail(head,8);
    insertAtTail(head,19);
    insertAtTail(head,12);

    display(head);

    insertAfterIndex(head,5,3);
    display(head);

    deleteHead(head);
    deleteHead(head);
    display(head);

    deleteNode(head,4);
    display(head);jj
    return 0;
}