// Write a program to find Gross salary and print it in proper format. (take HRA = 10% of
// basic, MA = 5% of Basic, TA = 2% of Basic, PF = 10% of Basic, Prof_tax = 200,
// overtime = 50 rs. Per hour)



#include<stdio.h>
int main()
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
    printf("\n Net Payable Amount         : %d",gross_amt - ded_amount);
    printf("\n----------------------------------------");
    getchar();
    printf("\n\n\n press ENTER to exit...  ");
    getchar();
    return 0;
}
