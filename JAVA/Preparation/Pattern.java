
import java.util.*;
public class Pattern {

    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Number of Row : ");
        int row =  ar.nextInt();
        ar.close();

        for (int i = 0; i < row; i++) {
            for (int j = row; j >= i; j--) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}