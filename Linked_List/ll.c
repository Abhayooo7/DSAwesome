#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void insertAtTail(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;


    if(*head == NULL)
         *head = newNode;

    else
    {
        struct node *temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

}
void insertAtStart(struct node **head, int val){
    struct node *newNode = malloc(sizeof(struct node));

    newNode->data = val;
    newNode->next = NULL;

    newNode->next = *head;
    *head = newNode;
}

void insertInBet(struct node **head, int val, int pos){
    struct node *n = malloc(sizeof(struct node));
    n->data = val;
    n->next = NULL;

    int count =1;
    struct node *temp = *head;
    while(count != pos){
        temp = temp->next;
        count++;
    }
    n->next = temp->next;
    temp->next = n;

}

void deleteStart(struct node **head){
    struct node* toDelete = *head;
    (*head) = (*head)->next;
    free (toDelete);
}

void deleteAtTail(struct node **head){
    struct node* temp = *head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    struct node* toDelete = temp->next;
    temp->next = NULL;

    free (toDelete);
}
void deleteInBet(struct node **head, int val){
     if(head == NULL){
        return;
    }
    if((*head)->next == NULL){
        deleteStart(head);
        return;
    }
    struct node* temp = *head;

    while(temp->next->data != val){
        temp = temp->next;
    }
    struct node* toDelete = temp->next;
    temp->next = temp->next->next;
    free (toDelete);
}

void display(struct node *head)
{
    struct node *temp = head;

    
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}
void test(struct node** headnode) 
{ 
  if((*headnode) == NULL) 
    return; 
  printf((*headnode)->data);  
   
  if((*headnode)->next != NULL ) 
    test((*headnode)->next->next); 
  printf((*headnode)->data); 
}

int main()
{
     struct node *head = NULL;

     insertAtTail(&head,2);
     insertAtTail(&head,3);
     insertAtTail(&head,4);
     insertAtTail(&head,5);
     insertAtTail(&head,6);
     insertAtTail(&head,7);
     test(&head);
     
     

     


     return 0;
}