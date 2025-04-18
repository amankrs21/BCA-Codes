import java.util.Scanner;

// Program for nested if statement.

public class Program_9 {
    public static void main(String[] args) {
        int num;

        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter any Number : ");
        num = ar.nextInt();

        ar.close();

        if (num > 0) {
            if (num % 2 == 0) {
                System.out.println("\n "+num+" is Even and Positive");
            } else {
                System.out.println("\n "+num+" is Odd and Positive");
            }
        }
        else if (num < 0){
            if (num % 2 == 0) {
                System.out.println("\n "+num+" is Even and Negetive");
            } else {
                System.out.println("\n "+num+" is Odd and Negetive");
            }
        }
        else {
            System.out.println("\n "+num+" is Zero");
        }
    }
}
