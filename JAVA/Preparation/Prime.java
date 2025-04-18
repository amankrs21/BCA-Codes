import java.util.*;
public class Prime {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter any Number to Check Prime or NOT : ");
        int num = ar.nextInt();
        ar.close();
        if (num == 0 || num == 1) {
            System.out.println("\n "+num+" is NOT a Prime Number");
        }
        else {
            int flag=0;
            for (int i = 2; i < num/2; i++) {
                if(num % i == 0) {
                    System.out.println("\n "+num+" is NOT a Prime Number");
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                System.out.println("\n "+num+" is a Prime Number");
            }
        }
    }
}
