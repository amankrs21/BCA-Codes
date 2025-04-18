// Program to implement Exception Handelling (Try, Catch, Throw, Throws)

public class lab32 {
    public static void main(String[] args) {
        try {
            int num1 = 10, num2 = 0;
            int div = num1 / num2;
            System.out.println("\n Addition is -> "+div);
        }
        catch (ArithmeticException E){
            System.out.println(E);
        }
        
        try {
            String name = "null";
            System.out.println(name.charAt(0));
        } 
        catch (NullPointerException e) {
            System.out.println(e);
        }
        
        catch (Exception e) {
            System.out.println(e);
        }
    }
}
