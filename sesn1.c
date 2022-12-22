// write a program to store a list of numbers using LL and find the position of the given no.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;

void create(int n)
{
    int num;
    struct node *tmp, *newnode;
    head = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the value ");

    scanf("%d", &num);
    head->data = num;
    
    head->next = NULL;
    tmp = head;

    for (int i = 1; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value ");
        scanf("%d", &num);

        newnode->data = num;
        newnode->next = NULL;

        tmp->next = newnode;
        tmp = tmp->next;
    }
}

void findpos(int num)
{
    struct node *tmp;
    tmp = head;
    int c = 1;
    while (tmp != NULL)
    {
        if (tmp->data == num)
        {
            printf("Element found at position %d ", c);
            break;
        }
        else
        {
            tmp = tmp->next;
            c++;
        }
    }
}

int main()
{
    int n, num;
    printf("Enter the number of nodes ");
    scanf("%d", &n);

    create(n);
    printf("Enter the element to find position ");
    scanf("%d", &num);
    findpos(num);

    return 0;
}