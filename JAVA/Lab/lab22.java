// Program to use Scanner Class

import java.util.*;
public class lab22 {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter Your Name : ");
        String name = ar.nextLine();
        ar.close();

        System.out.println("\n Hello "+name+", How are You :)");
    }
}
