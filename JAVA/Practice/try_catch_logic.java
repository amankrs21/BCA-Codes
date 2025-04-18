import java.util.*;
class inp{
    public void us(){
        Scanner user = new Scanner(System.in);
        System.out.print("\n Enter Only Number : ");
        String a = user.nextLine();
        // user.close();
        
        try{
            int ab= Integer.parseInt(a);
            System.out.println("Your Number is  :  "+ab);
        }
        catch(Exception e){
            System.out.println("This is not a Number :  "+a);
            System.out.print("Exception : "+e+"\n Try again : ");

            us();
        }
        user.close();
    }
}
public class try_catch_logic {
    public static void main(String[] args) throws Exception {
        inp obj = new inp();
        obj.us();
    }
}
