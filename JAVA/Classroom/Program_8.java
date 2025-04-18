// Program for If..else statement.

import java.util.Scanner;
public class Program_8 {
    public static void main(String[] args) {
        int num;

        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter any Number : ");
        num = ar.nextInt();

        ar.close();

        if (num % 2 == 0) {
            System.out.println("\n "+num+" is a Even Number");
        }
        else {
            System.out.println("\n "+num+" is a Odd Number");
        }
    }
}
