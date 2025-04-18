import java.util.Scanner;

// program for if..else..if statement.
public class Program_10 {
    public static void main(String[] args) {
        int num;

        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter any Number : ");
        num = ar.nextInt();

        ar.close();

        if (num > 0) {
            System.out.println("\n "+num+" is a Positive Number");
        }
        else if (num < 0){
            System.out.println("\n "+num+" is a Negetive Number");
        }
        else {
            System.out.println("\n "+num+" is Zero");
        }
    }
}
