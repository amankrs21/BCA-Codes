// program for while loop statement.

public class Program_11 {
    public static void main(String[] args) {
        int num = 10, i = 1, var;
        System.out.println("\nTable of Number "+num+" is -> ");
        while (i < 11) {
            var = num * i;
            System.out.println(num+" * "+i+" = "+var);
            i++;
        }
    }
}
