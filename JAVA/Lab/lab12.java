// Program to use while loop

import java.util.*;
public class lab12 {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Number to find Table : ");
        int number = ar.nextInt();
        ar.close();

        int row = 1;
        while(row <= 10){
            System.out.print("\n\t "+number+" * "+row+" = "+(number*row));
            row++;
        }
        System.out.println();
    }
}
