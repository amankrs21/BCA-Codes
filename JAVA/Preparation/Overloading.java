import java.util.Scanner;

public class Overloading {
    Overloading(String name) {
        System.out.println("\n Hello, My Name is :- "+name);
    }
    Overloading(int enroll) {
        System.out.println(" My Enrollnment Number is :- "+enroll);
    }
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Your Name : ");
        String name = ar.next();
        System.out.print(" Enter Your Enrollnement Number : ");
        int enr = ar.nextInt();
        ar.close();

        new Overloading(name);
        new Overloading(enr);
    }
}
