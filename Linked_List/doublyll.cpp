#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

        node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

void insertAtHead(node* &head,int val){
    node* n = new node(val);

    n->next = head;

    if(head != NULL){
    head->prev = n;
    }

    head = n;

}

void insertAtTail(node* &head,int val){
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
void insertInBet(node* &head,int val, int pos){
    node* n = new node(val);
    node* temp = head;
    int count = 1;

    while(temp != NULL && count != pos-1){
        temp = temp->next;
        count++;
    }
    temp->next->prev = n;
    n->next = temp->next;
    temp->next = n;
    n->prev = temp;


}

void deleteAtHead(node* &head){
    node* toDelete = head;

    head= head->next;
    head->prev=NULL;

    delete toDelete;
}

void delNode(node* &head, int pos){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;

    int count = 1;

    while(temp != NULL && count != pos){
        temp = temp->next;
        count++;
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
    cout<<temp->data<<"->";
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

    


    return 0;
}