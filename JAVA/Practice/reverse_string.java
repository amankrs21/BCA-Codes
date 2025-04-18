// Program to Reverse the String

import java.util.Scanner;

public class reverse_string {

    public static void main(String[] args) {

        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter Your String : ");
        String str = ar.nextLine();

        ar.close();

        System.out.println("\n Given String is : "+str);

        StringBuilder input1 = new StringBuilder();
        input1.append(str);
        input1.reverse();
        System.out.println("\n Reverse String is : "+input1);
        
    }
}
