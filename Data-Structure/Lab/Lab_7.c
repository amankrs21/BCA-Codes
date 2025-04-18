// Program on Operations of Circular Queue

#include <stdio.h>

int queue[100], ch, n, i, front = -1, rear = -1;

void insert();
void delete ();
void display();

int main(int argc, char const *argv[])
{
    printf("\n Enter Size of the Circular Queue : ");
    scanf("%d", &n);

    do
    {
        printf("\n\n +------------------------+");
        printf("\n | Press 1 for Insert     |");
        printf("\n | Press 2 for Delete     |");
        printf("\n | Press 3 for Display    |");
        printf("\n | Press 0 for Exit       |");
        printf("\n +------------------------+");
        printf("\n\n Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        default:
            printf("\n Enter Valid Choice\n");
            break;
        }
    } while (ch != 0);

    return 0;
}

void insert()
{
    int item;
    if (front==0 && rear==n-1 || front>=0 && rear==front-1 )
    {
        printf("\n Queue Overflow");
    }
    else
    {
        printf("\n Enter Element : ");
        scanf("%d", &item);
        if (rear==n-1)
        {
            rear=0;
        }
        else{
            if (front==-1)
            {
                front=0;
            }
            rear++;
        }
        queue[rear]=item;
        printf("\n Element Inserted Succesfully");
    }
}

void delete ()
{
    if (front == -1)
    {
        printf("\n Underflow");
    }
    else
    {
        printf("\n Deleted Element is %d", queue[front]);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (front==n-1)
            {
                front=0;
            }
            else
            {
                front++;
            }
        }
    }
}

void display()
{
    int i = front;
    printf("\n Elements of the Queue are : ");
    if (front<=rear)
    {
        while (i<=rear)
        {
            printf("%d, ",queue[i++]);
        }
    }
    else
    {
        while (i<=n-1)
        {
            printf("%d, ",queue[i++]);
        }
        while (i<+rear)
        {
            printf("%d, ",queue[i++]);
        }
    }
}
