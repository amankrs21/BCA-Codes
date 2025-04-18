// Program to do Arithmetic Operations of two number by taking input from User

import java.util.Scanner;
public class addition {

    public static void main(String[] args) {
        int num1, num2, sum, sub, mul, div, mod;

        Scanner sc = new Scanner(System.in);
        
        System.out.print("\n Enter Number 1 : ");
        num1 = sc.nextInt();

        System.out.print("\n Enter Number 2 : ");
        num2 = sc.nextInt();

        sc.close();
        
        sum = num1 + num2;
        sub = num1 - num2;
        mul = num1 * num2;
        div = num1 / num2;
        mod = num1 % num2;

        System.out.println("\n Addition is -> "+sum);
        System.out.println("\n Substraction is -> "+sub);
        System.out.println("\n Multiplication is -> "+mul);
        System.out.println("\n Division is -> "+div);
        System.out.println("\n Modulo is -> "+mod);

    }
}
