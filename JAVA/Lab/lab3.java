import java.util.Scanner;

// Program to calculate Simple Interest

public class lab3 {    
    public static void main(String[] args) {
        int si, rate, time, pri;
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Prinicipal Amount : ");
        pri = ar.nextInt();
        System.out.print(" Enter Rate of Interest : ");
        rate = ar.nextInt();
        System.out.print(" Enter Time : ");
        time = ar.nextInt();
        ar.close();
        si = (pri*rate*time)/100;

        System.out.println("\n Simple Interest is -> Rs"+si);
    }
}
