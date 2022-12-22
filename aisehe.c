#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
}*head;

void create(){
    struct node *tail , *new;
    int n;
    printf("enter the no. of nodes:");
    scanf("%d",&n);
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&new->data);
    head = new;
    tail = new;
    n--;
    while(n--){
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&new->data);
        new->next=NULL;
        tail->next=new;
        tail = new;

    }

    

}
void display(){
    while(head->next!=NULL){
        printf("the data is -->%d\n",head->data);
        head=head->next;
    }
    printf("the data is -->%d -->",head->data);
}

int main(){
    create();
    display();
    
    return 0;
}