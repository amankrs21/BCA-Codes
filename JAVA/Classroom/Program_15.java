// Program for use of Constructor

public class Program_15 {
    String name, branch;

    Program_15(String n, String b)
    {
        name = n;
        branch = b;
    }
    void details(){
        System.out.println("\n Name : "+name+"\n Branch : "+branch);
    }
    public static void main(String[] args) {
        Program_15 s1 = new Program_15("","");
        Program_15 s2 = new Program_15("Aman","BCA");
        Program_15 s3 = new Program_15("Yash","BCA");
        Program_15 s4 = new Program_15("Nivid","IMCA");
        Program_15 s5 = new Program_15("Aman","MCA");

        s1.details();
        s2.details();
        s3.details();
        s4.details();
        s5.details();
    }
}
