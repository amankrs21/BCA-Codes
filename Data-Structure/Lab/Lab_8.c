// Program to Implement Linked List funtions

#include<stdio.h>
#include<stdlib.h>
// #include<cstdlib>

// here we first created structure which having two boxes
// first box contain data and second box contain address of second node if it exist
// otherwise it contain NULL value;
struct node
{
    int data;
    struct node *next;
};
// now we created a pointer which pointing the first node that is created by Structure
// in simple word you can say we just created engine of the Train which is connected with 
// first box of Train and first connected with second.. and So on
struct node *head;

// Now we are creating UDF funtions for each operations
void display();
void insertbegin();
void insertend();
void insertafter();
void randominsert();
void begindelete();
void enddelete();
void randomdelete();
void search();
void copy_list();

int main(int argc, char const *argv[])
{
    int ch;
    while (ch != 0)
    {
        // system("clear");
        
        printf("\n\n\n\n\t --Operations of Linked List--");
        printf("\n\t Please Choose any one Option");
        printf("\n\t+------------------------------------+");
        printf("\n\t| Press 1 for Display Linked List    |");
        printf("\n\t| Press 2 for Insert at Beginning    |");
        printf("\n\t| Press 3 for Insert at End          |");
        printf("\n\t| Press 4 for Random Insert          |");
        printf("\n\t| Press 5 for Insert after a NODE    |");
        printf("\n\t| Press 6 for Delete from Beginning  |");
        printf("\n\t| Press 7 for Delete from END        |");
        printf("\n\t| Press 8 for Random Delete          |");
        printf("\n\t| Press 9 for Search Element         |");
        printf("\n\t| Press 10for Copy List              |");
        printf("\n\t| Press 0 for Exit                   |");
        printf("\n\t+------------------------------------+");

        printf("\n\n Enter Your Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                display();
                break;
            case 2:
                insertbegin();
                break;
            case 3:
                insertend();
                break;
            case 4:
                randominsert();
                break;
            case 5:
                insertafter();
                break;
            case 6:
                begindelete();
                break;
            case 7:
                enddelete();
                break;
            case 8:
                randomdelete();
                break;
            case 9:
                search();
                break;
            case 10:
                copy_list();
                break;
            default:
                printf("\n Please Enter Valid Choice");
                break;
        }
    }    
    return 0;
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\n Linked List is Empty");
    }
    else
    {
        printf("\n Elements of Linked List are :- ");
        while (ptr != NULL)
        {
            printf("\n\t %d",ptr->data);
            ptr = ptr->next;
        }
    }
}

void insertbegin()
{
    struct node *ptr;
    int element;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter Element to Insert : ");
        scanf("%d",&element);
        ptr->data = element;
        ptr->next = head;
        head = ptr;
        printf("\n %d is Inserted in the Node of Linked List",element);
    }
}

void insertend()
{
    int element;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL) {
        printf("\n OVERFLOW");
    }
    else {
        printf("\n Enter Element for Insert : ");
        scanf("%d",&element);
        ptr->data = element;
        if (head == NULL){
            ptr->next = head;
            head = ptr;
            printf("\n %d is Inserted in the Node of Linked List",element);
        }
        else {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr = head;
            printf("\n %d is Inserted in the Node of Linked List",element);
        }
    }
}

void insertafter()
{
    int element;
    struct node *ptr, *pre_node;
    ptr = (struct node *)malloc(sizeof(struct node *));
    pre_node = head->next;
    if (pre_node == NULL) {
        printf("\n Previous Node can't be NULL");
    }
    else {
        printf("\n Enter Element for Insert : ");
        scanf("%d",&element);
        ptr->data = element;
        ptr->next = pre_node->next;
        pre_node->next = ptr;
        printf("\n %d is Inserted in the Node of Linked List",element);
    }
}

void randominsert()
{
    int element, place, i;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node *));

    if (ptr == NULL){
        printf("\n Overflow");
    }
    else
    {
        printf("\n Enter Element after which you have to add Node : ");
        scanf("%d",&place);
        printf(" Enter Element to Insert : ");
        scanf("%d",&element);
        
        ptr->data = element;
        
        while (temp->data != place)
        {
            printf("\n %d",temp->data);
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\n %d is Inserted in the Node of Linked List",element);
    }
}

void begindelete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n Nothing to Delete, List is Empty");
    }
    else {
        ptr = head;
        int element = ptr->data;
        head = ptr->next;
        free(ptr);
        printf("\n Node Deleted from the Begining, and element is %d",element);
    }
}

void enddelete()
{
    struct node *ptr, *temp;
    if (head == NULL) {
        printf("\n Nothing to Print List is Empty");
    }
    else if (head->next == NULL)
    {
        head == NULL;
        free(head);
        printf("\n Only Node of the List Deleted");
    }
    
    else {
        ptr = head;
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        free(ptr);
        printf("\n Deleted Node from the Last of the List");
    }
}

void randomdelete()
{
    int place, i;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node *));

    printf("\n Enter Location to Delete Element : ");
    scanf("%d",&place);

    ptr = head;
    for ( i = 0; i < place; i++)
    {
        temp = ptr;
        ptr = ptr->next;
        if (ptr == NULL){
            printf("\n Can't Delete Element");
            return;
        }
    }
    temp->next = ptr->next;
    free(ptr);
    printf("\n Node Deleted Successfully");
}

void search()
{
    int element, flag, i=0;
    struct node *ptr;
    ptr = head;
    
    if(ptr == NULL){
        printf("\n List is Empty");
    }
    else {
        printf("\n Enter Element which you want to Search : ");
        scanf("%d",&element);
        while (ptr != NULL)
        {
            if (ptr->data == element){
                printf("\n Element Found at place %d",i+1);
                // flag = 0;
                break;
            }
            else {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1) {
            printf("\n Element Not found");
        }
    }
}

void copy_list()
{
    
}