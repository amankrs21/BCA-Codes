/*Write a Program to perform arithmetic operation for two numbers.
(take input of number from keyboard using scanf()) (perform addition, subtraction, multiplication, division and also find modulo)*/
#include <stdio.h>
#include <conio.h>
main()
{
     int num1, num2;
     int ch;
     printf("\n-----------------------------------------------");
     printf("\n              List of Operations               ");
     printf("\n-----------------------------------------------");
     printf("\n Addition           press 1");
     printf("\n Substracton        press 2");
     printf("\n Multiplication     press 3");
     printf("\n Division           press 4");
     printf("\n Modulo             press 5");
     printf("\n-----------------------------------------------");
     printf("\n  Select your choice from the given operations: ");
     scanf("%d", &ch);
     printf("\n Enter value for number1: ");
     scanf("%d", &num1);
     printf("\n Enter value for number2: ");
     scanf("%d", &num2);
     switch(ch)
     {
          case 1:
               printf("\n Addition is: %d",num1+num2);
               break;
          case 2:
               printf("\n Substraction is: %d",num1-num2);
               break;
          case 3:
               printf("\n Multiplication is: %d",num1*num2);
               break;
          case 4:
               printf("\n Division is: %d",num1/num2);
               break;
          case 5:
               printf("\n Modulo is: %d",num1%num2);
               break;
          default :
               printf("\n Enter the valid operation");
               break;
          
     }
     getch();
     return 0;
}
