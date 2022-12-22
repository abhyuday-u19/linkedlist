#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[5];
int rear = -1;
int front = -1;
void enqueue()
{
    int element;
    printf("\nEnter the Element\n");
    scanf("%d", &element);
    if (rear == N - 1)
    {
        printf("Overflow");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    queue[rear] = element;
    printf("Element is inserted");
}
void dequeue()
{
    int element;
    if (front == -1 || front > rear)
    {
        printf("Underflow\n");
        return;
    }
    else
    {
        element = queue[front];
        if (rear == front)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front - 1;
        }
        printf("Element deleted\n");
    }
}
void display()
{
    int i;
    if (rear == -1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nThe values are\n");
        for (i = front; i <= rear; i++)
        {
            printf("\n%d\n", queue[i]);
        }
    }
}


void main()
{
    int choice;
    while (choice != 4)
    {
        printf("=============queue============");
        printf("\n1.insert an element\n2.delete an element\n3.display the queue\n4.exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
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
            printf("wrong input");
            break;
        }
    }
}