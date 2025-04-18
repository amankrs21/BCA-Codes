// Program to Check number is Palindrome or not

import java.util.*;
public class Palindrome {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter any Number : ");
        int num = ar.nextInt();
        ar.close();
        int sum=0, rem;
        int temp = num;
        while(num>0) {
            rem = num % 10;
            sum = (sum * 10) + rem;
            num = num / 10;
        }
        if (temp == sum) {
            System.out.println("\n "+temp+" is a Palindrome");
        }
        else {
            System.out.println("\n "+temp+" is NOT a Palindrome");
        }
    }
}
