// Program to check the given no is odd or even

import java.util.Scanner;

public class Program_3 {
    public static void main(String[] args) {
        int num1;

        Scanner as = new Scanner(System.in);

        System.out.print(" Enter Number : ");
        num1 = as.nextInt();

        as.close();

        if (num1 % 2 == 0) {
            System.out.println("\n Given Number is Even");
        }
        else {
            System.out.println("\n Given Number is ODD");
        }
    }
}