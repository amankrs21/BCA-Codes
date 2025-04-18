class thread_example implements Runnable {
    public void run() {
        System.out.println("Thread is unning...");
    }

    public static void main(String args[]) {
        thread_example m1 = new thread_example();
        Thread t1 = new Thread(m1);
        t1.start();
    }
}
