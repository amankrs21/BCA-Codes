// Program to Implement Interface

interface fan {
    void run();
}

// we use implements to inherit the feature of interface in class
// and we use extract if we inherit features of interface in interface
class air implements fan {
    public void run(){
        System.out.println("\n Fan is Running");
    }
}

public class lab30 {
    public static void main(String[] args) {
        fan obj = new air();
        obj.run();
    }
}
