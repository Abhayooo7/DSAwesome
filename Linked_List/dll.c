#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
    
};
void insertAtHead(struct node **head, int val){
    struct node* n = (struct node*)malloc(sizeof(struct node));

    n->next = *head;
    n->prev = NULL;
    n->data = val;

    if(head != NULL){
    (*head)->prev = n;
    }
    *head = n;
    
}
void insertAtTail(struct node **head, int val){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->next = NULL;
    n->prev = NULL;
    n->data = val;
    
    if(head == NULL){
        n->next = NULL;
        n->prev = NULL;
        n->data = val;
        return;
    }
    struct node* temp = *head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    n->next =NULL;
}
void insertAtBet(struct node **head, int val, int pos){
    struct node* n = (struct node*)malloc(sizeof(struct node));
     n->next = NULL;
    n->prev = NULL;
    n->data = val;
    struct node* temp = *head;
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
void deleteAtHead(struct node **head){
    struct node* toDelete = *head;

    (*head)= (*head)->next;
    (*head)->prev=NULL;

    free (head);
}

void delNode(struct node **head, int pos){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    struct node* temp = *head;

    int count = 1;

    while(temp != NULL && count != pos){
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;

    if(temp->next != NULL){
    temp->next->prev = temp->prev;
    }

    free (temp);

}

void display(struct node* head){
    struct node* temp = head;

    while(temp != NULL){
    printf("%d->",temp->data);
    temp = temp->next;
    }
    printf("NULL\n");
}


int main(){
    struct node *head = NULL;
    insertAtTail(&head,5);
    insertAtTail(&head,4);
    insertAtTail(&head,8);
    insertAtTail(&head,1);
    // display(head);
    return 0;
}