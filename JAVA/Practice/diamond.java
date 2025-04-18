import java.util.*;

public class diamond {
    void pattern(int r){
        int sp = r - 1;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < sp; j++) {
                System.out.print(" ");
            }
            for (int k = 0; k <= i; k++) {
                System.out.print("* ");
            }
            System.out.println();
            sp-- ;
        }

        // Now in the Reverse order
        sp = 0;
        for (int i = r; i > 0; i--) {
            for (int j = 0; j < sp; j++) {
                System.out.print(" ");
            }
            for (int j = 0; j < i; j++) {
                System.out.print("* ");
            }
            System.out.println();
            sp++;
        }
    }
    public static void main(String[] args) {
        Scanner as = new Scanner(System.in);
        System.out.print("\n Enter Number of Rows : ");
        int row = as.nextInt();
        as.close();
        diamond obj = new diamond();
        obj.pattern(row);
    }
}
