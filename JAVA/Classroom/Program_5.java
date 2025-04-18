// Program to find the largest no amongst three number.

import java.util.Scanner;

public class Program_5 {
    public static void main(String[] args) {
        
        int num1, num2, num3;

        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter Number 1 : ");
        num1 = ar.nextInt();
        System.out.print("\n Enter Number 2 : ");
        num2 = ar.nextInt();
        System.out.print("\n Enter Number 3 : ");
        num3 = ar.nextInt();

        ar.close();

        if (num1 > num2 && num1 > num3){
            System.out.println("\n Largest Number is -> "+num1);
        }

        else if (num2 > num3 && num2 > num1) {
            System.out.println("\n Largest Number is -> "+num2);
            
        }
        else {
            System.out.println("\n Largest Number is -> "+num3);
        }
    }
}