#include<stdio.h>

int front=-1, rear=-1;

void insert(int *q, int s)
{
    int ele;
    if(rear >= s-1)
    {
        printf("\n Queue Overflow");
    }
    else {
        rear++;
        printf("\n Enter Element : ");
        scanf("%d",&ele);
        q[rear] = ele;
        if(front == -1)
        {
            front = 0;
        }
        printf("\n %d is Successfully Inserted in the Queue",ele);
    }
}

void delete(int *q)
{
    if (front == -1)
    {
        printf("\n Queue Underflow");
    }
    else {
        printf("\n %d is Deleted fron the Queue",q[front]);
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
    }
}

void display(int *q, int s)
{
    if (front == -1)
    {
        printf("\n Queue Underflow");
    }
    else {
        for (int i = rear; i >= front; i--)
        {
            printf(" %d, ",q[i]);
        }
    }
}

void main()
{
    int size, ch;
    printf("\n Enter Size of the Queue : ");
    scanf("%d",&size);

    int queue[size];

    do{
        printf("\n Press 1 for Insertion");
        printf("\n Press 2 for Deletion");
        printf("\n Press 3 for Display");
        printf("\n Press 4 for Exit");

        printf("\n Enter Your Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                insert(queue, size);
                break;
            case 2:
                delete(queue);
                break;
            case 3:
                display(queue, size);
                break;
            default:
                printf("\n Please Enter Valid Choice\n");
                break;
        }
    }while(ch != 0);
}
