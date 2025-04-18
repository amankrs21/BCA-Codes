#include<stdio.h>

int top=-1, stack[100], size;

void push(){
    int element;
    if(top >= size-1){
        printf("\n Stack Overflow");
    }
    else {
        top++;
        printf("\n Enter Element : ");
        scanf("%d",&element);

        stack[top] = element;

        printf("\n %d is inserted Successfully in the Stack",element);
    }
}

void pop(){
    int element;
    if(top == -1){
        printf("\n Stack Underflow");
    }
    else{
        element = stack[top];
        top--;
        printf("\n %d is removed from Stack",element);
    }
}

void peep(){
    int element, position;
    if(top == -1){
        printf("\n Stack Overflow");
    }
    else {
        printf("\n Enter Position from Top : ");
        scanf("%d",&position);

        element = stack[top-position+1];

        printf("\n %d is the Element from the Top -> ",element);
    }
}

void display(){
    if (top == -1) {
        printf("\n Stack Underflow");
    }
    else {
        printf("\n Elements from the Stack :- \n");
        for (int i = 0; i < size; i++)
        {
            printf(" %d, ",stack[i]);
        }
    }
}

void main(){
    int ch;
    printf("\n Enter the Size of the Stack : ");
    scanf("%d",&size);

    while (ch != 0)
    {
        printf("\n Press 1 for PUSH Operation");
        printf("\n Press 2 for POP Operation");
        printf("\n Press 3 for PEEP Operation");
        printf("\n Press 4 for Display Operation");

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
            default:
                printf("\n Please Enter Valid Choice");
                break;
        }
    }
}