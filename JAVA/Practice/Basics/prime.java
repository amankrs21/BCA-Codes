import java.util.*;

public class prime {
    void table(int n){
        for (int i = 1; i < 11; i++) {
            System.out.println("\t"+n+" * "+i+" = "+(n*i));
        }
    }

    void check_prime(int num){
        int temp = 0;
        if (num > 1){
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    temp = 1;
                    break;
                }
                else {
                    temp = 0;
                }
            }
            if (temp == 0) {
                System.out.println("\n "+num+" is a Prime Number\n\n\n");
                table(num);
            }
            else {
                System.out.println("\n "+num+" is a NOT Prime Number");
            }
        }
    }

    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Positive Number to check Prime Number : ");
        int number = ar.nextInt();
        ar.close();
        prime obj = new prime();
        obj.check_prime(number);
    }
}
