import java.util.Scanner;

// Program for simple if statement.

public class Program_7 {
    public static void main(String[] args) {
        int age;
        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter Your Age : ");
        age = ar.nextInt();

        ar.close();

        if (age > 17) {
            System.out.println("\n You are Eligible for Voting");
        }
    }
}
