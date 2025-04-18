// Name:Kalpesh patil
// Enrollment no: 200510101121

#include<stdio.h>

int queue[100],n,i,ch;
int front = -1;
int rear = -1;
void insert(){
    int item;
    if(front==0 && rear== n-1|| front>=0 && rear == front-1){
        printf("Circular queue is Overflow");
    }
    else{
        printf("Enter the element to be inserted:\n");
        scanf("%d", &item);
        if(rear == n-1)
        {
            rear = 0;
            
        }
        else{
            front = 0;
            rear = rear + 1;
        }
        queue[rear] = item;
        printf("Element inserted Succefully\n");
        
    }
}
void deleted(){
    int item;
    if(front==-1){
        printf("Cicrular queue is underflow");
    }
    else{
        printf("Element deleted from Circular queue:%d\n",queue[front]);
        if(front==rear){
            front = -1;
            rear = -1;
            
        }
        else{
            if(front == n-1){
                front = 0;
                
            }
            else{
                front = front + 1;
                
            }
        }
    }
}
void display(){
    if(front==-1){
        printf("Cicrular is Empty\n");
    }
    else{
        int i = front;
        if(front<=rear){
            while(i<=rear){
                printf("%d\n",queue[i++]);
                
            }
        }
        else{
            while(i<=n-1){
                printf("%d\n",queue[i++]);
                
            }
            i = 0;
            while(i<=rear){
                printf("%d\n",queue[i++]);
            }
        }
    }
}
int main(){
    
    printf("Enter the size of Cicrular queue:\n");
    scanf("%d",&n);
    do{
        printf("Enter the choice: \n1.Insert \n2.Delete \n3.Display \n4");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert();
                    break;
            case 2: deleted();
                    break;
            case 3: display();
                    break;
            default:
                    printf("Enter valid choice");
                    break;
        }
    }
    while(ch!=0);
    return 0;
}