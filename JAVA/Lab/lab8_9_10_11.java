// Program to Perform all type of Branching Statements(if-else)

import java.util.*;
public class lab8_9_10_11 {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Any Number : ");
        int number = ar.nextInt();
        ar.close();

        if (number > 0) {
            if (number % 2 == 0) {
                System.out.println("\n "+number+" is Positive and Even Number");
            } else {
                System.out.println("\n "+number+" is Positive and Odd Number");
            }
        } else {
            if (number % 2 == 0) {
                System.out.println("\n "+number+" is Negetive and Even Number");
            } else {
                System.out.println("\n "+number+" is Negetive and Odd Number");
            }
        }
    }
}
