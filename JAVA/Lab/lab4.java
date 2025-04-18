import java.util.Scanner;

// Program to check number is odd and even

public class lab4 {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter any Number : ");
        int number = ar.nextInt();
        ar.close();
        if (number % 2 == 0){
            System.out.println("\n "+number+" is a Even Number");
        }
        else{
            System.out.println("\n "+number+" is a ODD Number");
        }
    }
}
