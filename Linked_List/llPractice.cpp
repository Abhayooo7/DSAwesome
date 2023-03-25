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

void insertAtEnd(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAfterPos(node* &head, int val, int pos){
    node* n = new node(val);

    int count = 1;
    node* temp = head;
    while(count != pos){
        temp = temp->next;
        count++;
    }
    n->next = temp->next;
    temp->next = n;

}

void deleteHead(node* &head){
    node* toDelete = head;
    head = head->next;
    delete toDelete;
}
void deletion(node* &head, int val){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteHead(head);
        return;
    }
    node* temp = head;

    while(temp->next->data != val){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void deleteTail(node* &head){
    node* temp = head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next = NULL;

    delete toDelete;
}

node* iterativeRev(node* &head){
    node* currptr = head;
    node* prevptr = NULL;
    node* nextptr;

    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node* recursiveRev(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* newHead = recursiveRev(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

node* revK(node* &head, int k){
    node* prevptr = NULL;
    node* nextptr;
    node* currptr = head;

    int count =0;

    while(currptr != NULL && count< k){

        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        
        
        count++;

    }
    if(nextptr != NULL){
    head->next = revK(nextptr,k);
    }
     return prevptr;
}


int len(node* &head){
    node* temp = head;
    int c = 1;
    while(temp->next != NULL){
        c++;
        temp= temp->next;
    }

    return c;
}

node* appendK(node* &head, int k){
    node* tail = head;
    node* newHead;
    node* newTail;

    int l = len(head);
    int count =1;

    while(tail->next != NULL){
        if(count == l-k){
            newTail = tail;
        }
        if(count == l-k+1){
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }

    tail->next = head;
    newTail->next = NULL;
    return newHead;
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
    insertAtHead(head,10);
    insertAtHead(head,2);
    insertAtHead(head,5);
    insertAtHead(head,15);
   
    
    node* newHead = revK(head,3);
    
    display(newHead);



    return 0;
}