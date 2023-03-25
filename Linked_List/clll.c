#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void createCirLL(struct node **head, int n){
    int val;
    while(n!=0){
        scanf("%d",&val);
        struct node *newNode = malloc(sizeof(struct node));
        newNode->data = val;
        newNode->next = NULL;
        if(*head == NULL){
         *head = newNode;
         (*head)->next = *head;
    }
    else
    {
        struct node *temp = *head;
        while(temp->next != *head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
    n--;
    }

}

void add(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;


    if(*head == NULL){
         *head = newNode;
         (*head)->next = *head;
    }
    else
    {
        struct node *temp = *head;
        while(temp->next != *head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }

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
void display(struct node *head)
{
    struct node *temp = head;

    do{
         printf("%d->", temp->data);
         temp = temp->next;
    }
    while(temp != head);
    printf("\n");
    
}
void delete(struct node **head){

    struct node* toDelete = *head;
    (*head) = (*head)->next;

    struct node* temp = *head;
    while(temp->next != *head){
        temp = temp->next;
    }
    temp->next = *head;
    free (toDelete);
}
void deleteInBet(struct node **head, int val){
     if(head == NULL){
        return;
    }
    if((*head)->next == NULL){
        delete(head);
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


int main()
{
    struct node *head = NULL;
    int n;
    printf("Write length of linked list: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    
    createCirLL(&head,n);
    add(&head,5);
    display(head);
    insertInBet(&head,3,3);
    display(head);
    // delete(&head);
    // display(head);
    deleteInBet(&head,2);
    display(head);
    


    return 0;
}