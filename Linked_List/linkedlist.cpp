#include<iostream>
using namespace std;

struct node{
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
    n->next = head;
    head = n;

}
void insertAtTail(node* &head, int val){
    node* n  = new node(val);

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

void insertAfterPos(node* &head, int val, int pos){
    node* n = new node(val);
    int c = 1;
    node* temp = head;

    while(c != pos){
        temp = temp->next;
        c++;
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
    if(head->next == NULL && head->data == val){
        deleteHead(head);
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
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteHead(head);
    }
    node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next = NULL;
    delete toDelete;

}

node* reverse(node* &head){
    node* cp = head;
    node* pp = NULL;
    node* np;

    while(cp != NULL){
        np = cp->next;
        cp->next = pp;

        pp = cp;
        cp = np;
    }
    head = pp;
    return head;
}
// !!CHECK THIS ONE
node* recursiveRev(node* &head){
    if(head == NULL || head->next == NULL ){
       return head;
    }
    
    node* newHead = recursiveRev(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return newHead;
}

node* revK(node* &head, int k){
    node* cp = head;
    node* pp = NULL;
    node* np;
    int c = 0;

    while(cp != NULL && c < k){
        np = cp->next;
        cp->next = pp;

        pp = cp;
        cp = np;
        c++;
    }
    // if(np != NULL){
    // head->next = revK(np,k);
    // }
    head->next = cp;

    return pp;
}

int len(node* &head){
    int c =1;
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
        c++;
    }
    return c;
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
    
    // display(head);
    // reverse(head);
    
    // display(head);
    // node* newHead = recursiveRev(head);
    // display(newHead);

    node* nh = revK(head,2);
    display(nh);
}