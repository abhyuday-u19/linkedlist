#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*rear;
struct node*front;

void enqueue(){
    struct node*ptr;
    int item;

    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Queue is full\n");
    }
    else{
        printf("Enter the value:");
        scanf("%d",&item);
        ptr->data=item;
        if(front==NULL){
            front=rear=ptr;
            front -> next =NULL;
            rear -> next =NULL;
            
        }
        else{
            rear->next=ptr;
            rear=ptr;
            rear->next =NULL;
        }
    }


}
void dequeue()
{
    struct node*ptr;
    if(front==NULL){
        printf("Queue is empty\n");
        return;

    }
    else{
        ptr=front;
        front=front->next;
        free(ptr);
    }
}
void display(){
    struct node*ptr;
    ptr = front;
    if(front == NULL){
        printf("Queue is Empty");

    }
    else{
        printf("Printing Values\n");
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->next;

        }
    }
}

void main ()  
{  
    int choice;   
    while(choice != 4)   
    { 
        printf("\n===========================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            enqueue();  
            break;  
            case 2:  
            dequeue();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  