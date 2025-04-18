//demo program that shows how funtions work
#include<stdio.h>
hello();    //prototype
welcome();  //prototype
bye_bye();  //prototype
main()
{
    printf("\n Hello Everyone.., How are you all__ This sentence is in Main Funtion  :)");
    hello();        //calling of funtion
    welcome();      //calling of funtion
    // bye_bye();      //calling of funtion
    getch();
}
hello()
{
    printf("\n Hello.., Welcome to C Language ");
    welcome();      //calling of funtion
    bye_bye();      //calling of funtion
}
welcome()
{
    printf("\n Welcome to the Funtions in C language ");
    bye_bye();      //calling of funtion
}
bye_bye()
{
    printf("\n Learn more Grow more.... Happy Programing ");
}