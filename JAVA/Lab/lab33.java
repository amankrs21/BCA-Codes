// Program to create thread

public class lab33 extends Thread {
    public void run() {
        System.out.println("\n Thread is Running... ");
    }
    public static void main(String[] args) {
        lab33 obj = new lab33();
        obj.start();
    }
}
