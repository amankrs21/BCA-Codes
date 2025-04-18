import java.util.Scanner;

public class Program_14 {
    public static void main(String[] args) {
            
        System.out.println("\n +----------------------------+");
        System.out.println(" | Press 1 for Addition       |");
        System.out.println(" | Press 2 for Substraction   |");
        System.out.println(" | Press 3 for Multiplication |");
        System.out.println(" | Press 4 for Division       |");
        System.out.println(" | Press 5 for Modulo         |");
        System.out.println(" | Press 6 for Exit           |");
        System.out.println(" +----------------------------+");

        Scanner ar = new Scanner(System.in);
        int num1 , num2, ch;
        System.out.print("\n Enter Your Choice : ");
        ch = ar.nextInt();
        if (ch == 6) {
            System.exit(0);
        }
        System.out.print("\n Enter Number 1 : ");
        num1 = ar.nextInt();
        System.out.print(" Enter Number 2 : ");
        num2 = ar.nextInt();
        ar.close();

        int add, sub, mul, div, mod;
        add = num1 + num2;
        sub = num1 - num2;
        mul = num1 * num2;
        div = num1 / num2;
        mod = num1 % num2;
        
        switch (ch) {
            case 1:
                System.out.println("\n Addition of "+num1+" and "+num2+" is -> "+add);
                break;
            case 2:
                System.out.println("\n Substraction of "+num1+" and "+num2+" is -> "+sub);
                break;
            case 3:
                System.out.println("\n Multplication of "+num1+" and "+num2+" is -> "+mul);
                break;
            case 4:
                System.out.println("\n Division of "+num1+" and "+num2+" is -> "+div);
                break;
            case 5:
                System.out.println("\n Modulo of "+num1+" and "+num2+" is -> "+mod);
                break;
            default:
            System.out.println("\n Please Enter valid Input");
                break;
        }
    }
}
