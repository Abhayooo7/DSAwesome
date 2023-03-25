#include <iostream>

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

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head =n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}


void insertAtStart(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertInBet(node* &prev_node, int val){
    node* n = new node(val);
    n->data = val;
    n->next = prev_node->next;
    prev_node->next = n;

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
    while(temp->next->next != NULL){
        temp= temp->next;
    }
    node* toDelete = temp->next;
    temp->next = NULL;

    delete toDelete;
}

node* iterativeRev(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
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
    head->next->next= head;
    head->next = NULL;

    return newHead;
}

node* revK(node* &head,int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count=0;
    while(currptr != NULL && count<k){
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

void makeCycle(node* &head, int pos){
    node* temp = head;
    node* start;
    int count = 1;
    while(temp->next != NULL){
        if(count == pos){
            start = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = start;
}

bool cycleDetection(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){
    node* fast=head;
    node* slow=head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow != fast);

    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int len(node* &head){
    node* temp =head;
    int count =1;

    while(temp->next != NULL){
        
        temp = temp->next;
        count++;
    }
    return count;
}

node* appenK(node* &head, int k){
    node* newTail;
    node* newHead;
    node* tail=head;

    int l = len(head);
    int count=1;

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
    newTail->next = NULL;
    tail->next =head;
    return newHead;
}
void intersect(node* &head1, node* &head2, int pos){
    node* temp = head1;
    
    while(pos != 1){
        temp = temp->next;
        pos--;
    }
    node* temp1 = head2;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }

    temp1->next = temp;
    
}

int intersection(node* &head1, node* &head2){
    int l = len(head1);
    int m = len(head2);

    int d =0;
    node* ptr1;
    node* ptr2;

    if(l>m){
        d = l-m;
        ptr1 = head1;
        ptr2 = head2;
    }else
    {
        d = m-l;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d != 0){
        ptr1 = ptr1->next;
        if(ptr1 == NULL){
            return -1;
        }
        d--;
    }
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
    
}

node* merge(node* &head1, node* &head2){
    node* dummyNode = new node(-1);
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* ptr3 = dummyNode;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
       
        ptr3 = ptr3->next;
    }
    while(ptr1 != NULL){
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while(ptr2 != NULL){
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    return dummyNode->next;
}

void oddEven(node* &head){
    node* odd= head;
    node* even = head->next;
    node* evenHead = even;

    while(odd->next !=NULL && even->next !=NULL){
        odd->next = even->next;
        odd = odd->next;
        if(odd->next != NULL){
            even->next = odd->next;
            even = even->next;
        }
    }
    odd->next = evenHead;
    if(even->next != NULL){
        even->next = NULL;
    }
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head,int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;

}



int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    
    display(head);
    oddEven(head);
    display(head);
    // node* head1=NULL;
    // insertAtTail(head1,2);
    // insertAtTail(head1,6);
    // insertAtTail(head1,9);
    // display(head1);
    
    // node* newHead = merge(head,head1);
    // display(newHead);
   


    // node* newHead = appenK(head,3);
    // display(newHead);


    
    // int k=3;
    // node* n = revK(head,k);
    // display(n);

    // makeCycle(head,4);
    // cout<<cycleDetection(head)<<endl;
    // removeCycle(head);
    // cout<<cycleDetection(head);




    return 0;
}