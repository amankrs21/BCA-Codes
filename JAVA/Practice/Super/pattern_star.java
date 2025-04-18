import java.util.Scanner;

public class pattern_star {
    public static void main(String[] args) {
        int row;
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter the Row : ");
        row = ar.nextInt();
        ar.close();

        for (int i = 1; i < row; i++) {
            for (int j=row-i; j>=1; j--){
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
