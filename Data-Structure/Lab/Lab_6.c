// Program to Perform Simple Queue Operations

#include<stdio.h>
#include<stdlib.h>

int front = -1, rear = -1, queue[100], i, size;

void insert();      // by this funtion we will insert elements in the Queue
void delete();      // by this funtion we wiil delete elements from the Queue
void display();     // by this funtion we will display elements of the Queue

int main(int argc, char const *argv[])
{
    int ch;
    printf("\n Enter the Size of the Queue : ");
    scanf("%d",&size);

    while(ch != 0)
    {        
        printf("\n +-------------------------------+");
        printf("\n | Press 1 for Insert in Queue   |");
        printf("\n | Press 2 for Delete in Queue   |");
        printf("\n | Press 3 for Display Element   |");
        printf("\n | Press 4 for Exit              |");
        printf("\n +-------------------------------+");

        printf("\n\n Enter Your Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);    // stdlib library is required and also return type
            break;
        default:
        printf("\n Enter Valid Choice...\n");
            break;
        }
    } 
    return 0;
}

void insert()
{
    int element;
    if (rear >= size-1)
    {
        printf("\n Queue Overflow");
    }
    else
    {
        rear++;
        printf("\n Enter Element to Insert in Queue : ");
        scanf("%d",&element);
        queue[rear] = element;
        if(front == -1)
        {
            front = 0;
        }
        printf("\n %d is Inserted in the Queue",element);
    }
}

void delete()
{
    if (front == -1)
    {
        printf("\n Queue Underflow");
    }
    else
    {
        printf("\n %d is Deleted from the Queue",queue[front]);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        printf("\n Elements from Queue is :- \n\t |");
        for ( i = rear; i >= front; i--)
        {
            printf(" %d |",queue[i]);
        }
    }
}