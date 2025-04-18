#include<stdio.h>
#include<math.h>
#define PI 3.14

void practical_1();
void practical_2();
void practical_3();
void practical_4();
void practical_5();
void practical_6();
void practical_7();
void practical_8();
void practical_9();
void practical_10();
void practical_11();
void practical_12();
void practical_13();
void practical_14();
void practical_15();
void practical_16();
void practical_17();
void practical_18();
void practical_19();
void practical_20();
void practical_21();
void practical_22();
void practical_23();
void practical_24();
void practical_25();
void practical_26();
void practical_27();
void practical_28();
void practical_29();
void practical_30();
void practical_31();
void practical_32();
void practical_33();
void practical_34();
void practical_35();
void practical_36();
void practical_37();
void practical_38();
void practical_39();
void practical_40();
void practical_41();
void practical_42();
void practical_43();
void practical_44();
void practical_45();
void practical_46();
void practical_47();
void practical_48();

int main()
{
    int practical;
    printf("\n Enter the Practical Number : ");
    scanf("%d",&practical);

    switch (practical)
    {
        case 1:
            practical_1();
            break;
        case 2:
            practical_2();
            break;
        case 3:
            practical_3();
            break;
        case 4:
            practical_4();
            break;
        case 5:
            practical_5();
            break;
        case 6:
            practical_6();
            break;
        case 7:
            practical_7();
            break;
        case 8:
            practical_8();
            break;
        case 9:
            practical_9();
            break;
        case 10:
            practical_10();
            break;
        case 11:
            practical_11();
            break;
        case 12:
            practical_12();
            break;
        case 13:
            practical_13();
            break;
        case 14:
            practical_14();
            break;
        case 15:
            practical_15();
            break;
        case 16:
            practical_16();
            break;
        case 17:
            practical_17();
            break;
        case 18:
            practical_18();
            break;
        case 19:
            practical_19();
            break;
        case 20:
            practical_20();
            break;
        case 21:
            practical_21();
            break;
        case 22:
            practical_22();
            break;
        case 23:
            practical_23();
            break;
        case 24:
            practical_24();
            break;
        case 25:
            practical_25();
            break;
        case 26:
            practical_26();
            break;
        case 27:
            practical_27();
            break;
        case 28:
            practical_28();
            break;
        case 29:
            practical_29();
            break;
        case 30:
            practical_30();
            break;
        case 31:
            practical_31();
            break;
        case 32:
            practical_32();
            break;
        case 33:
            practical_33();
            break;
        case 34:
            practical_34();
            break;
        case 35:
            practical_35();
            break;
        case 36:
            practical_36();
            break;
        case 37:
            practical_37();
            break;
        case 38:
            practical_38();
            break;
        case 39:
            practical_39();
            break;
        case 40:
            practical_40();
            break;
        case 41:
            practical_41();
            break;
        case 42:
            practical_42();
            break;
        case 43:
            practical_43();
            break;
        case 44:
            practical_44();
            break;
        case 45:
            practical_45();
            break;
        case 46:
            practical_46();
            break;
        case 47:
            practical_47();
            break;
        case 48:
            practical_48();
            break;
        default:
            printf("\n Input doesn't exist");
            break;
    }
    getchar();
    printf("\n\n\n press ENTER to exit...  ");
    getchar();
    return 0;
}

void practical_1()
{
    printf("\n Name :- Aman Kumar Singh \n Address :- Sirsa Biran, Lalganj \nVaishli, Bihar 844123 \n Curently I'm Studying in Parul University in BCA department");
}

void practical_2()
{
    int num;
    printf("\n Enter any Interger Number : ");
    scanf("%d",&num);
    printf("\n Your entered Number is --> %d",num);
}

void practical_3()
{
    float num;
    printf("\n Enter any Decimal Number : ");
    scanf("%f",&num);
    printf("\n Your entered Decimal Number is --> %.3f",num);
}

void practical_4()
{
    int num1,num2;
    printf("\n Enter Number 1: ");
    scanf("%d",&num1);
    printf("\n Enter Number 2: ");
    scanf("%d",&num2);
    printf("\n Addition of %d and %d is --> %d",num1,num2,num1+num2);
}

void practical_5()
{
    int num1,num2,add,sub,multy,div,modulo;
    printf("\n Enter Number 1: ");
    scanf("%d",&num1);
    printf(" Enter Number 2: ");
    scanf("%d",&num2);
    printf("\n Addition of %d and %d is --> %d",num1,num2,num1+num2);
    printf("\n Substraction of %d and %d is --> %d",num1,num2,num1-num2);
    printf("\n Multiplication of %d and %d is --> %d",num1,num2,num1*num2);
    printf("\n Division of %d and %d is --> %d",num1,num2,num1/num2);
    printf("\n Modulo of %d and %d is --> %d",num1,num2,num1%num2);
}

void practical_6()
{
    char c;
    printf("\n Enter any Value to check its ASCII value : ");
    scanf(" %c", &c);
    printf("\n ASCII value of %c is --> %d",c,c);
}

void practical_7()
{
    int num1,num2;
    printf("\n Enter Number 1: ");
    scanf("%d",&num1);
    printf(" Enter Number 2: ");
    scanf("%d",&num2);
    printf(" Quotient is --> %d \n Remainder is --> %d",num1/num2,num1%num2);
}

void practical_8()
{
    int num1,num2,temp;
    printf("\n Enter Number 1: ");
    scanf("%d",&num1);
    printf(" Enter Number 2: ");
    scanf("%d",&num2);
    printf(" Before Swapping the Values \n Number 1 is : %d \n Number 2 is : %d",num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\n Ater Swapping the Values \n Number 1 is --> %d \n Number 2 is --> %d",num1,num2);
}

void practical_9()
{
    int num1,num2;
    printf("\n Enter Number 1: ");
    scanf("%d",&num1);
    printf(" Enter Number 2: ");
    scanf("%d",&num2);
    printf(" Before Swapping the Values \n Number 1 is : %d \n Number 2 is : %d",num1,num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\n Ater Swapping the Values \n Number 1 is --> %d \n Number 2 is --> %d",num1,num2);
}

void practical_10()
{
    int side,area,perimeter;
    printf("\n Enter the Side of the Square : ");
    scanf("%d",&side);
    area = side * side;
    perimeter = 4 * side;
    printf("\n Area of the Square is --> %d",area);
    printf("\n Permimeter of the Square is --> %d",perimeter);
}

void practical_11()
{
    float base,height,a,b,c,area,perimeter;
    printf("\n Enter the Height of the Triangle : ");
    scanf("%f",&height);
    printf(" Enter the Base of the Triangle : ");
    scanf("%f",&base);
    printf(" Enter the value of 3 sides of the Traingle : \n");
    scanf("%f%f%f",&a,&b,&c);
    area = base * height * (0.5);
    perimeter = a + b + c;
    printf("\n Area of the Triangle is --> %.2f",area);
    printf("\n Permimeter of the Triangle is --> %.2f",perimeter);
}

void practical_12()
{
    float radius,area,perimeter;
    printf("\n Enter the Radius of the Circle : ");
    scanf("%f",&radius);
    area = PI * (radius * radius);
    perimeter = 2 * PI * radius;
    printf("\n Area of the Circle is --> %.2f",area);
    printf("\n Permimeter of the Circle is --> %.2f",perimeter);
}

void practical_13()
{
    int length,breadth,area,perimeter;
    printf("\n Enter the Length of the Rectangle : ");
    scanf("%d",&length);
    printf(" Enter the Breadth of the Rectangle : ");
    scanf("%d",&breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("\n Area of the Rectangle is --> %d",area);
    printf("\n Permimeter of the Rectangle is --> %d",perimeter);
}

void practical_14()
{
    float principal,rate,time,interest;
    printf("\n Enter Principal amount : Rs  ");
    scanf("%f",&principal);
    printf(" Enter Rate of Interest(in %%) : ");
    scanf("%f",&rate);
    printf(" Enter the Time(in year) : ");
    scanf("%f",&time);
    interest = (principal*rate*time)/100;
    printf("\n Simple Interest is --> Rs %.2f",interest);
}

void practical_15()
{
    float num;
    printf("\n Enter any Number : ");
    scanf("%f",&num);
    if (num > 0)
    {
        printf("\n %.2f is a Positive Number",num);
    }
    else if (num < 0)
    {
        printf("\n %.2f is a Negetive Number",num);
    }
    else
    {
        printf("\n %.0f is Zero(It is neither postive nor negetive)",num);
    }
}

void practical_16()
{
    int num;
    printf("\n Enter any Number : ");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
        printf("\n %d is a Even Number",num);
    }
    else
    {
        printf("\n %d is a Odd Number",num);
    }
}

void practical_17()
{
    float a,b,c,determinant,root1,root2,d;
    printf("\n Enter Co-efficient of a, b, c : \n");
    scanf("%f %f %f",&a,&b,&c);
    determinant = sqrt(b*b -4*a*c);
    d = 2 * a;
    root1 = ((-b) + determinant) / d;
    root2 = ((-b) - determinant) / d;
    printf("\n Root 1 is --> %.2f \n Root 2 is --> %.2f",root1,root2);
}

void practical_18()
{
    int basic, hra, med_all, tra_all, pf, prof_tax =200, ext_hr, otamt = 50, otpayable, gross_amt, ded_amount;
    printf("\n Enter Basic Amount: ");
    scanf("%d",&basic);
    printf("\n Enter extra hours for overtime: ");
    scanf("%d",&ext_hr);
    hra=(basic*10)/100;
    med_all=(basic*5)/100;
    pf=(basic*10)/100;
    tra_all=(basic*2)/100;
    otpayable=ext_hr*otamt;
    gross_amt=basic+med_all+hra+otpayable;
    ded_amount=tra_all+pf+prof_tax;
    printf("\n----------------------------------------");
    printf("\n              Salary Slip               ");
    printf("\n----------------------------------------");
    printf("\n Basic Amount              : %d",basic);
    printf("\n Medical Allowance         : %d",med_all);
    printf("\n Hour Rent Allowance       : %d",hra);
    printf("\n Over Time Payable         : %d",otpayable);
    printf("\n----------------------------------------");
    printf("\n Gross Amount              : %d",gross_amt);
    printf("\n----------------------------------------");
    printf("\n Provident Fund            : %d",pf);
    printf("\n Travelling Allowance      : %d",tra_all);
    printf("\n Professional Tax          : %d",prof_tax);
    printf("\n----------------------------------------");
    printf("\n Deduction Amount          : %d",ded_amount);
    printf("\n----------------------------------------");
    printf("\n Net Payable Amount        : %d",gross_amt - ded_amount);
    printf("\n----------------------------------------");
}

void practical_19()
{
    float s1,s2,s3,s4,s5,per,total;
    printf("\n Enter the Marks of 1st Subject : ");
    scanf("%f",&s1);
    printf(" Enter the Marks of 2nd Subject : ");
    scanf("%f",&s2);
    printf(" Enter the Marks of 3rd Subject : ");
    scanf("%f",&s3);
    printf(" Enter the Marks of 4th Subject : ");
    scanf("%f",&s4);
    printf(" Enter the Marks of 5th Subject : ");
    scanf("%f",&s5);
    printf(" Enter the total marks of all Subjects : ");
    scanf("%f",&total);
    per = (s1+s2+s3+s4+s5)/total * (100);
    printf("\n Percentage is --> %.2f%%",per);
    if (per > 74 && per < 101)
    {
        printf("\n Student Passed with DISTINCTION");
    }
    else if (per > 59 && per < 75)
    {
        printf("\n Student Passed with FIRST CLASS");
    }
    else if (per > 49 && per < 60)
    {
        printf("\n Student Passed with SECOND CLASS");
    }
    else if (per > 39 && per < 50)
    {
        printf("\n Student just passed with PASSING MARKS");
    }
    else
    {
        printf("\n Stdent is FAILED");
    }
}

void practical_20()
{
    int num, i, sum=0;
    printf("\n Enter Limit of Natural Number : ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("\n Sum of Natural Numbers upto %d is --> %d",num,sum);
}

void practical_21()
{
    int num1,num2,swi;
    printf("\n Enter Number 1 and Number 2 : \n");
    scanf("%d %d",&num1,&num2);
    printf("\n For Addition Prees 1\n For Substract Press 2\n For Multiply Press 3\n For Division Press 4\n For Modulo Press 5\n");
    scanf("%d",&swi);
    switch (swi)
    {
    case 1:
        printf("\n Addition is --> %d",num1+num2);
        break;
    case 2:
        printf("\n Substraction is --> %d",num1-num2);
        break;
    case 3:
        printf("\n Multiplication is --> %d",num1*num2);
        break;
    case 4:
        printf("\n Division is --> %d",num1/num2);
        break;
    case 5:
        printf("\n Modulo is --> %d",num1%num2);
        break;
    default:
        printf("\n Please enter valid Input");
        break;
    }
}

void practical_22()
{
    float circle,semicircle,rectangle,triangle,square,radius,length,breadth,base,height,side;
    int shape;
    printf("\n-----------------------------------------------");
    printf("\n     List of Operations to Calculate Area      ");
    printf("\n-----------------------------------------------");
    printf("\n       For Circle             press 1");
    printf("\n       For Semicircle         press 2");
    printf("\n       For Rectangle          press 3");
    printf("\n       For Triangle           press 4");
    printf("\n       For Square             press 5");
    printf("\n-----------------------------------------------");
    printf("\nSelect your choice from the given operations: ");
    scanf("%d", &shape);
    printf("-----------------------------------------------");
    switch(shape)
    {
        case 1:
            printf("\n Enter the radius of the Circle: ");
            scanf("%f",&radius);
            circle= PI*(radius*radius);
            printf("\n Area of Circle is: %.2f sq unit",circle);
            break;
        case 2:
            printf("\n Enter the radius of the Semicircle: ");
            scanf("%f",&radius);
            semicircle=PI*(radius*radius)*0.5;
            printf("\n Area of Semicircle is: %.2f sq unit",semicircle);
            break;
        case 3:
            printf("\n Enter the Length of Rectangle: ");
            scanf("%f",&length);
            printf("\n Enter the Bradth of Rectangle: ");
            scanf("%f",&breadth);
            rectangle=2*(length+breadth);
            printf("\n Area of Recatngle is: %.2f sq unit",rectangle);
            break;
        case 4:
            printf("\n Enter the Base of Triangle: ");
            scanf("%f",&base);
            printf("\n Enter the Height of Triangle: ");
            scanf("%f",&height);
            triangle=0.5*(base*height);
            printf("\n Area of Triangle is: %.2f sq unit",triangle);
            break;
        case 5:
            printf("\n Enter the Side of Sqaure: ");
            scanf("%f",&side);
            square=side*side;
            printf("\n Area of Square is: %.2f",square);
            break;
        default :
            printf("Please Enter Valid Input");
            break;
    }
    printf("\n-----------------------------------------------");
}

void practical_23()
{
    int i;
    printf("\n ASCII value for Upper Case : \n");
    for ( i = 65; i <= 90; i++)
    {
        printf("\t\t %d --> %c",i,i);
    }
    printf("\n ASCII value for Lower Case : \n");
    for ( i = 97; i <= 122; i++)
    {
        printf("\t\t %d --> %c",i,i);
    }
}

void practical_24()
{
    int num,i;
    unsigned long long fact=1;
    printf("\n Enter any number to find Factorial: ");
    scanf("%d",&num);
    if (num==0)
    {
        fact = 1;
    }
    else if (num==1)
    {
        fact = 1;
    }
    else
    {
        for ( i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
    }
    printf("\n Factorial of entered number is: %llu",fact);
}

void practical_25()
{
    int n1 = 0, n2 = 1, n3, num, i;
    printf("\n Enter the Limit : ");
    scanf("%d",&num);
    printf("\n %d, %d,",n1,n2);
    for ( i = 2; i < num; i++)
    {
        n3 = n1 + n2;
        printf(" %d,",n3);
        n1 = n2;
        n2 = n3;
    }
}

void practical_26()
{
   int num1, num2, i, GCD, LCM;
    printf("\n Enter Number 1: ");
    scanf("%d",&num1);
    printf(" Enter Number 2: ");
    scanf("%d",&num2);
    for ( i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            GCD = i;
        }
    }
    LCM = (num1*num2)/GCD;
    printf("\n Value of GCD is : %d",GCD);
    printf("\n Value of LCM is : %d",LCM); 
}

void practical_27()
{
    int num, n, rem, sum = 0;
    printf("\n Enter any Number: ");
    scanf("%d", &num);
    n = num;
    //logic for reverse the number
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = rem + (sum * 10);
    }
    printf("\n Reverse Number of %d is ---> %d", n, sum);    
}

void practical_28()
{
    int num, rem, sum=0, copy_num;
    printf("\n Enter any Number: ");
    scanf("%d",&num);
    copy_num = num;
    //logic
    while (num>0)
    {
        rem = num%10;
        num = num/10;
        sum = rem + (sum * 10);
    }
    if (sum==copy_num)
    {
        printf("\n %d is Palindrome",copy_num);
    }
    else
    {
        printf("\n %d is Not Palindrome",copy_num);
    }
}

void practical_29()
{
    int no, i, flag=0;
    printf("\n Enter any Number: ");
    scanf("%d",&no);
    //logic
    for ( i = 2; i < no; i++)
    {
        if (no%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("\n %d is Not Prime",no);
    }
    else
    {
        printf("\n %d is Prime",no);
    }
}

void practical_30()
{
    int no, i,j, flag=0;
    printf("\n Enter Number for Interval: ");
    scanf("%d",&no);
    //logic
    for ( i = 1; i < no; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if (flag==0)
        {
            printf("\t %d",i);
        }
    }
}

void practical_31()
{
    int no, i, sum=0;
    printf("\n Eneter any No: ");
    scanf("%d",&no);
    //logic for perfect number
    for ( i = 1; i < no; i++)
    {
        if (no%i==0)
        {
            sum =sum + i;
        }
    }
    if(sum==no)
    {
        printf("\n %d is a Perfect Number",no);
    }
    else
    {
        printf("\n %d is Not a Perfect Number",no);
    }
}

void practical_32()
{
    int no,mul,rem,sum=0,copy_sum,sum_rev=0,no_copy;
    printf("\n Enter any no: ");
    scanf("%d",&no);
    no_copy = no;
    while (no>0)
    {
        rem = no%10;
        no = no/10;
        sum = sum + rem;
    }
    copy_sum = sum;
    //reverse the sum
    while (sum>0)
    {
        rem = sum%10;
        sum = sum/10;
        sum_rev =rem +(sum_rev * 10);
    }
    mul = copy_sum * sum_rev;
    if(mul == no_copy)
    {
        printf("\n Magic Number");
    }
    else
    {
        printf("\n Not Magic");
    }
}

void practical_33()
{
    int no,rem,sum=0,no_copy;
    printf("\n ENter any 3 digit number: ");
    scanf ("%d",&no);
    no_copy = no;
    //logic for armstrong
    while (no>0)
    {
        rem = no % 10;
        sum = sum + (rem * rem * rem);
        no = no/10;
    }
    if (sum == no_copy)
    {
        printf("\n %d is Armstrong",no_copy);
    }
    else
    {
        printf("\n %d is not Armstrong",no_copy);
    }
}

void practical_34()
{
    int i,j,num;
    printf("\n Enter Rows : ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
       for ( j = 0; j < i+1; j++)
       {
           printf(" *");
       }
       printf("\n");
    }
    printf("\n");
    for ( i = 0; i < num; i++)
    {
       for ( j = 0; j < i+1; j++)
       {
           printf(" %d",i);
       }
       printf("\n");
    }
    printf("\n");
    for ( i = 0; i < num; i++)
    {
       for ( j = 1; j < i+1; j++)
       {
           printf(" %d",j);
       }
       printf("\n");
    }
    printf("\n");
    for ( i = 0; i < num; i++)
    {
       for ( j = 0; j < i; j++)
       {
           printf(" %c",'A' + j);
       }
       printf("\n");
    }
}

void practical_35()
{
    int i,j,k,row;
    printf("\n Enter the Rows : ");
    scanf("%d",&row);
    for ( i = 0; i < row; i++)
    {
        for ( k = 0; k < row - i; k++)
        {
            printf(" ");
        }
        for ( j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}

void practical_36()
{
    int i,j,k,row,num = 1;
    printf("\n Enter the Rows : ");
    scanf("%d",&row);
    for ( i = 0; i < row; i++)
    {
        for ( k = 0; k < row - i; k++)
        {
            printf(" ");
        }
        num = 1;
        for ( j = 0; j <= i; j++)
        {
            printf(" %d",num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

void practical_37()
{
    int array[21];
    int i, n, sum = 0;
    printf("\n Enter the Size of Array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf(" Enter the Elements of Array: ");
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    printf("\n Sum of all elements of array is: %d", sum);
}

void practical_38()
{
    int array[10], i, j, temp;
    for ( i = 0; i < 10; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    printf("\n Original Array is : ");
    for ( i = 0; i < 10; i++)
    {
        printf(" %d,",array[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;                
            }
        }
    }
    printf("\n Ascending Order is : ");
    for ( i = 0; i < 10; i++)
    {
        printf(" %d,",array[i]);
    }
}

void practical_39()
{
    int array[20], count, i, max, min;
    printf("\n Number of Elements want to store in Array : ");
    scanf("%d",&count);
    for ( i = 0; i < count; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    max = array[0];
    for ( i = 0; i < count; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    printf("\n Maximum Element of Array is --> %d",max);
    min = array[0];
    for ( i = 0; i < count; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    printf("\n Minimum Element of Array is --> %d",min);
}

void practical_40()
{
    int array[20], count, i;
    printf("\n Enter the Limit of Array : ");
    scanf("%d",&count);
    for ( i = 0; i < count; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    printf("\n Original Array is : ");
    for ( i = 0; i < count; i++)
    {
        printf(" %d,",array[i]);
    }
    printf("\n Reverse of Array is : ");
    for ( i = count-1; i >= 0; i--)
    {
        printf(" %d,",array[i]);
    }
}

void practical_41()
{
    char array[20];
    printf("\n Enter any String Value : ");
    gets(array);
    printf("\n Entered String is : ");
    puts(array);
}

void practical_42()
{
    int array[10],i,temp=1,search;
    for ( i = 0; i < 10; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    printf("\n Enter Element for Search : ");
    scanf("%d",&search);
    for ( i = 0; i < 10; i++)
    {
        if (search==array[i])
        {
            printf("\n %d is Fond at Location --> %d",search,i+1);
            temp = 1;
            break;
        }
        else
        {
            temp == 0;
        }
    }
    if (temp==0)
    {
        printf("\n %d is Not Found",search);
    }
}

void practical_43()
{
    int array[3][3],i,j,search,flag=1;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" Enter Elements : ");
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n Enter Element for Search : ");
    scanf("%d",&search);
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (search == array[i][j])
            {
                printf("\n %d is Found at %d %d",search,i+1,j+1);
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
    }
    if (flag == 0)
    {
        printf("\n %d is not Found",search);
    }
}

void practical_44()
{
    int array[10][10],row,col,max,min,i,j;
	printf("\n Enter the Size of Row: ");
    scanf("%d", &row);
    printf(" Enter the Size of Column : ");
    scanf("%d",&col);
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf(" Enter the Elements of Array: ");
            scanf("%d", &array[i][j]);
        }
    }
	max = array[0][0];  //assign first element of array
    min = array[0][0];
	for( i = 0; i < row; i++)
	{
        for ( j = 0; j < col; j++)
        {
            if(max < array[i][j])
		    {
			    max = array[i][j];
		    }
            if(min > array[i][j])
            {
                min = array[i][j];
            }
        }
	}
	printf("\n Maximum Element from Array is --> %d",max);
    printf("\n Minimum Element from Array is --> %d",min);
}

void practical_45()
{
    int array[10][10];
    int i, j, row, col, sum = 0;
    printf("\n Enter the Size of Row: ");
    scanf("%d", &row);
    printf(" Enter the Size of Column : ");
    scanf("%d",&col);

    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf(" Enter the Elements of Array: ");
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            sum = sum + array[i][j];
        }        
    }
    printf("\n Sum of all elements of array is: %d", sum);
}

void practical_46()
{
    int matrix1[10][10], matrix2[10][10], matrix3[10][10];
    int a, b, c, i, j;

    printf("\n Enter the Rows of Matrix: ");
    scanf("%d", &a);
    printf(" Enter the Columns of Matrix: ");
    scanf("%d", &b);

    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" Enter the elements of 1st matrices: ");
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" Enter the elements of 2nd matrices: ");
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\n\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\n First Matrix is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n Second Matrix is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n Addition of Matrix_1 and Matrix_2 is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix3[i][j]);
        }
        printf("\n");
    }
}

void practical_47()
{
    int matrix_1[10][10], matrix_2[10][10], matrix_3[10][10];
    int a, b, i, j;

    printf("\n Enter total Rows: ");
    scanf("%d", &a);
    printf(" Enter total Columns: ");
    scanf("%d", &b);

    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" Enter the elements of Matrix 1: ");
            scanf("%d", &matrix_1[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" Enter the elements of Matrix 2: ");
            scanf("%d", &matrix_2[i][j]);
        }
    }
    
    printf("\n\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            matrix_3[i][j] = matrix_1[i][j] - matrix_2[i][j];
        }
    }

    printf("\n Matrix 1 is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix_1[i][j]);
        }
        printf("\n");
    }

    printf("\n Matrix 2 is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix_2[i][j]);
        }
        printf("\n");
    }

    printf("\n Substraction of Matrix 1 and Matrix 2: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix_3[i][j]);
        }
        printf("\n");
    }
}

void practical_48()
{
    int matrix_1[5][5], matrix_2[5][5], matrix_3[5][5];
    int i, j, k, m;

    //taking input of order of both square matrix
    printf("\n Enter the order of Square Matrix 1: ");
    scanf("%d",&m);
    
    //taking input of matrix 1
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf(" Enter the elements of Matrix 1: ");
            scanf("%d", &matrix_1[i][j]);
        }
    }

    //taking input of matrix 2
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf(" Enter the elements of Matrix 2: ");
            scanf("%d", &matrix_2[i][j]);
        }
    }

    //process of multiplication
    printf("\n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            matrix_3[i][j]=0;   //intializing the final value that doesn't allow the variable to take garbage value
            for (k = 0; k < m; k++)
            {
                matrix_3[i][j] = matrix_3[i][j] + (matrix_1[i][j] * matrix_2[i][j]);
            }
        }
    }

    //printing of matrix 1
    printf("\n Matrix 1 is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%d", matrix_1[i][j]);
        }
        printf("\n");
    }

    //printing of matrix 2
    printf("\n Matrix 2 is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%d", matrix_2[i][j]);
        }
        printf("\n");
    }

    //printing of multiplication of matrix 1 and matrix 2
    printf("\n Multiplication Of Matrix 1 & Matrix 2 is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%d", matrix_3[i][j]);
        }
        printf("\n");
    }
}
