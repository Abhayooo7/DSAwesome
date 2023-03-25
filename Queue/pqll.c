#include<stdio.h>
#include<stdlib.h>


struct node
{
    int priority;
    int data;
    struct node *next;
};
struct node* front = NULL;
// struct node* back = NULL;

void enqueue(int x,int y){
        struct node *n = malloc(sizeof(struct node));
        struct node *q ;
        n->data = x;
        n->priority = y;
        n->next = NULL;
        if(front == NULL || y<front->priority){
            n->next=front;
            front = n;
            return;
        }else{
            q=front;
            while(q->next != NULL && q->next->priority<=y){
                q=q->next;
                
            }
            n->next=q->next;
            q->next=n;
        }
        
    }

void dequeue(){
    if(front == NULL){
        printf("Empty");
        return;
    }
    struct node* toDelete = front;
    front = front->next;

    free (toDelete);
}
void display()  
{  
    struct node *ptr;  
    ptr = front;  
    if(front == NULL)  
        printf("Queue is empty\n");  
    else  
    {     
        printf("Queue is :\n");  
        printf("Priority       Item\n");  
        while(ptr != NULL)  
        {  
            printf("%5d        %5d\n",ptr->priority,ptr->data);  
            ptr = ptr->next;  
        }  
    }  
}  


int main(){


    enqueue(5,1);
    enqueue(4,0);
    enqueue(3,3);
    enqueue(6,2);
    display();
    dequeue();
    display();

    return 0;
}