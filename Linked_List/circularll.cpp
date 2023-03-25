#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        n->next = n;
        head = n; 
        return;

    }

    node* temp =head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;

}
void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        insertAtHead(head,val);
        return;
    }

    node* temp = head;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;

}

void deleteAtHead(node* &head){
    node* toDelete = head;
    node* temp = head;

    while(temp->next != head){
        temp= temp->next;
    }
    temp->next = head->next;
    head = head->next;

    delete toDelete;
}

void deleteTail(node* &head){
    node* temp = head;

    while(temp->next->next != head){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next = head;

    delete toDelete;
}

void display(node* head){
    node* temp = head;

    do
    {
       cout<<temp->data<<" -> ";
       temp = temp->next;
    } while (temp != head);
    cout<<"HEAD"<<endl;
    
}
int main(){

    node* head = NULL;

    insertAtHead(head,10);
    insertAtHead(head,4);
    insertAtHead(head,9);
    insertAtTail(head,21);
    insertAtTail(head,13);
    insertAtTail(head,19);

    display(head);

    deleteTail(head);
    display(head);

    deleteAtHead(head);
    display(head);
    return 0;
}