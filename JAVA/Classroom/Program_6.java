import java.util.Scanner;

// Program to draw following pattern 
public class Program_6 {
    public static void main(String[] args) {  
        int row, num;
        char ch;
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter the Row : ");
        row = ar.nextInt();
        ar.close();
        
        // Pattern Number 1
        System.out.println("\nCharacter Pattern no - 01");
        for (int i = 1; i < row; i++) {
            for (int j = 1; j <= i; j++) {
                num = 64+j;
                ch = (char)num;
                System.out.print(ch+" ");
            }
            System.out.println();
        }
        
        // Pattern Number 2
        System.out.println("\nCharacter Pattern no - 02");
        for (int i = 1; i < row; i++) {
            for (int j = 1; j <= i; j++) {
                num = 64+i;
                ch = (char)num;
                System.out.print(ch+" ");
            }
            System.out.println();
        }
        
        // Pattern Number 3
        System.out.println("\nStar Pattern Program");
        for (int i = 1; i < row; i++) {
            for (int j=row-i; j>=1; j--){
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        
        // Pattern Number 4
        System.out.println("\nTriangle Pattern Program");
        for (int i = 1; i <= row; i++) {
            for (int j = i; j < row; j++) {
                System.out.print(" ");
            }
            for (int k = 1; k <= (2*i-1); k++) {
                if(k==1 || i == row || k==(2*i-1)) {  
                    System.out.print("*");  
                }  
                else {  
                    System.out.print(" ");  
                }
            }
            System.out.println("");
        }
    }
}
