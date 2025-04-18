//program to print book ID, Name, writer name, price, pages, no of copy, and edition.
#include<stdio.h>
struct book
{
    int book_ID;
    char bookname[20];
    char writer_name[20];
    int price;
    int pages;
    int no_copy;
    int edition;
}b1,b2;
int main()
{
    //reading data of structure
    printf("\n Enter Book ID : ");
    scanf("%d",&b1.book_ID);
    printf(" Enter the Name of Book : ");
    scanf("%s",&b1.bookname);
    printf(" Enter the Edition : ");
    scanf("%d",&b1.edition);
    printf(" Enter Writer Name : ");
    scanf("%s",&b1.writer_name);
    printf(" Enter the Price : ");
    scanf("%d",&b1.price);
    printf(" Enter the Pages : ");
    scanf("%d",&b1.pages);
    printf(" Enter Number of copies : ");
    scanf("%d",&b1.no_copy);

    printf("\n Enter Book ID : ");
    scanf("%d",&b2.book_ID);
    printf(" Enter the Name of Book : ");
    scanf("%s",&b2.bookname);
    printf(" Enter the Edition : ");
    scanf("%d",&b2.edition);
    printf(" Enter Writer Name : ");
    scanf("%s",&b2.writer_name);
    printf(" Enter the Price : ");
    scanf("%d",&b2.price);
    printf(" Enter the Pages : ");
    scanf("%d",&b2.pages);
    printf(" Enter Number of copies : ");
    scanf("%d",&b2.no_copy);

    //printing data of structure
    printf("-------------------------------------------------\n");
    printf("\n Book ID        :   %d",b1.book_ID);
    printf("\n Book Name      :   %s",b1.bookname);
    printf("\n Edition        :   %d",b1.edition);
    printf("\n Writer Name    :   %s",b1.writer_name);
    printf("\n Price          :   %d",b1.price);
    printf("\n Copies         :   %d",b1.no_copy);
    printf("\n-------------------------------------------------\n");
    printf("\n Book ID        :   %d",b2.book_ID);
    printf("\n Book Name      :   %s",b2.bookname);
    printf("\n Edition        :   %d",b2.edition);
    printf("\n Writer Name    :   %s",b2.writer_name);
    printf("\n Price          :   %d",b2.price);
    printf("\n Copies         :   %d",b2.no_copy);
    printf("\n-------------------------------------------------\n");
    
    return 0;
}