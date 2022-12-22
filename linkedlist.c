#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;

void create(){
    struct node *tail,*new;
    int n;
    printf("Enter the no. of node:");
    scanf("%d",&n);
    new = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&new->data);
    new->next=NULL;
    head = new;
    tail = new;
    n--;
    while(n--){
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&new->data);
        new->next=NULL;
        tail->next = new;
        tail = new;



    }


}
void InsertAtBeg(int data){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Unable to allocate memory\n");

    }
    else{
        newnode->data=data;
        newnode->next=head;
        head=newnode;
        printf("=====Node inserted===");

    }
}
void display(){
  
    
    while (head->next != NULL)
    {
        printf("%d -->",head->data);
        head=head->next;
    }
    printf("%d -->",head->data);
    
    

}


int main(){
    int data;


    create();
    
    printf("Enter the data:\n");
    scanf("%d",&data);
    InsertAtBeg(data);
    display();

    
    
    
    return 0;
}