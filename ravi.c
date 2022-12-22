#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} S1;

S1 *create()
{
    S1 *head, *tail, *new;
    int n;
    printf("Enter the number of data:");
    scanf("%d", &n);
    new = malloc(sizeof(S1));
    printf("Enter the data:\n");
    scanf("%d", &(new->data));
    new->link = NULL;
    head = new;
    tail = new;
     n--;

    while (n--)
    {
        new = malloc(sizeof(S1));
        printf("Enter the data:\n");
        scanf("%d", &(new->data));
        new->link = NULL;
        tail->link = new;
        tail = new;
    }
    return head;
}

void display(S1 *head)
{
    while (head->link != NULL)
    {
        printf("%d -> ", head->data);
        head = head->link; 
    }
    printf("%d\n", head->data);
}

void insertion(S1 *head, int b)
{
    int pos;
    printf("Enter the position :");
    scanf("%d", &pos);
    pos--;
   // while (--pos)
     for(int i=1;i<pos;i++)
    {
        head = head->link;
    }
    S1 *new = malloc(sizeof(S1));
    new->data = b;
    new->link = head->link;
    head->link = new;
}
void delete (S1 *head)
{
    int pos;
    printf("Enter the position u want to delete :");
    scanf("%d", &pos);
    S1 *ravi;

    while (--pos)
    {
        ravi = head;
        head = head->link;
    }
    ravi->link = head->link;
    free(head);
}
int count(S1 *head)
{
    int count = 0;
    S1 *ptr = head;
    while(ptr!=NULL){
        count++;
        ptr = ptr->link;
    }
    return count;
}

int main()
{
    S1 *head;

    head = create();
    int b;

    printf("Enter the value u want to insert: ");
    scanf("%d", &b);

    insertion(head, b);
    printf("The Elements are:\n");
    display(head);
    delete (head);
    printf("The Elements are:\n");
    display(head);
    printf("The total number of nodes:%d", count(head));

    return 0;
}