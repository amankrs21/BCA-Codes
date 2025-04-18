// Program to find the largest number amoung three number

import java.util.Scanner;

public class lab6 {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Number 1 : ");
        int num1 = ar.nextInt();
        System.out.print(" Enter Number 2 : ");
        int num2 = ar.nextInt();
        System.out.print(" Enter Number 3 : ");
        int num3 = ar.nextInt();
        ar.close();

        if (num1 > num2 && num1 > num3) {
            System.out.println("\n "+num1+" is Largest Number");
        }
        else if (num2 > num1 && num2 > num3) {
            System.out.println("\n "+num2+" is Largest Number");
        }
        else{
            System.out.println("\n "+num3+" is Largest Number");
        }
    }
}
