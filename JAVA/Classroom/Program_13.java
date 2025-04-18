// Program to use of do while loop

public class Program_13 {
    public static void main(String[] args) {
        int num = 4, i = 1, var;
        System.out.println("\nTable of Number "+num+" is -> ");

        do {
            var = num * i;
            System.out.println(num+" * "+i+" = "+var);
            i++;
        } while (i < 11);
    }
}
