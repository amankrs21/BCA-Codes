import java.util.Scanner;

public class simple_interest {
    public static void main(String[] args) {
        int time;
        double prin, rate, si;

        Scanner sc = new Scanner(System.in);

        System.out.print("\n Enter Principal Amount : ");
        prin = sc.nextDouble();

        System.out.print(" Enter Rate of Interest : ");
        rate = sc.nextDouble();

        System.out.print(" Enter Time (in Year) : ");
        time = sc.nextInt();

        sc.close();

        si = (prin*rate*time) / 100;

        System.out.println("\n Simple Interest is -> Rs"+si);
    }
}
