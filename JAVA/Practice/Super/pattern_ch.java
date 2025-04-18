import java.util.Scanner;

public class pattern_ch {
    public static void main(String[] args) {
        int row, num;
        char ch;
        // System.out.println(charAt(55));
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter the Row : ");
        row = ar.nextInt();
        ar.close();

        for (int i = 1; i < row; i++) {
            for (int j = 1; j <= i; j++) {
                num = 64+j;
                ch = (char)num;
                System.out.print(ch+" ");
            }
            System.out.println();
        }
    }
}
