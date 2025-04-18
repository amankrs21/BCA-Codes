// Program to Perform Stack Operations

#include<stdio.h>
#include<stdlib.h>

void push();     // this funtion will insert data in the Stack
void pop();      // this funtion will delete data from the Stack
void peep();     // this funtion will Show the Element from the Top
void display();  // this funtion will show all the Element from the Stack

int stack[100], top=-1, size, i;

void main()
{
    int ch;
    
    printf("\n Enter the Size of Stack : ");
    scanf("%d",&size);

    while(ch != 0)
    {        
        printf("\n\n +-------------------------------+");
        printf("\n | Press 1 for Push Operation    |");
        printf("\n | Press 2 for Pop Operation     |");
        printf("\n | Press 3 for Peep Operation    |");
        printf("\n | Press 4 for Display Stack     |");
        printf("\n | Press 5 for Exit              |");
        printf("\n +-------------------------------+");

        printf("\n\n Enter Your Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);    // stdlib library is required and also return type
            break;
        default:
        printf("\n Enter Valid Choice...\n");
            break;
        }
    } 
    getch();
}

void push()
{
    int element;
    
    if (top >= size-1)
    {
        printf("\n Stack Overflow");
    }
    else
    {
        top++;
        printf("\n Enter Element to Push in the Stack : ");
        scanf("%d",&element);

        stack[top] = element;
        
        printf("\n %d is Inserted in the Stack",element);
    }
}

void pop()
{
    int element;

    if (top == -1)
    {
        printf("\n Stack Underflow");
    }
    else
    {
        element = stack[top];
        top--;
        printf("\n %d is Removed from the Stack",element);
    }
}

void peep()
{
    int element, position;

    if (top == -1)
    {
        printf("\n Stack Underflow");
    }
    else
    {
        printf("\n Enter the Position from the Top to Display : ");
        scanf("%d",&position);

        element = stack[top-position+1];

        printf("\n %d Element from the Top is -> %d",position,element);
    }
}

void display()
{
    int element;

    if (top == -1)
    {
        printf("\n Stack Underflow");
    }
    else
    {
        printf("\n Element from Stack is :- ");
        for (i=top; i>=0; i--)
        {
            printf("\n\t | %d |",stack[i]);
        }
    }
}