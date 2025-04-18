//program to print odd numbers between 1 to 100.
#include<stdio.h>
void forloop();
void whileloop();
void dowhileloop();
void main()
{
	forloop();
	whileloop();
	dowhileloop();
	getch();
}
void forloop()
{
	int i;
	printf("\n Odd Numbers bet 1 to 100 by using for loop is : \n\n");
	for(i = 1; i <= 100; i = i + 2)
	{
		printf("%d\t",i);
	}
}
void whileloop()
{
	int i;
	printf("\n Odd Numbers between 1 to 100 by using while loop is : \n\n");
	i = 1;
	while(i <= 100)
	{
		printf("%d\t",i);
		i = i + 2;
	}
}
void dowhileloop()
{
	int i;
	printf("\n Odd Numbers bet 1 to 100 by using dowhile loop is : \n\n");
	i = 1;
	do
	{
		printf("%d\t",i);
		i = i + 2;
	}while(i <= 100);
}