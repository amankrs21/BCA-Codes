// Program to understand use of AWT by creating object method

import java.awt.*;
public class AWT2 {
    AWT2(){
        Frame f = new Frame();
        Button b = new Button(" Click Me");
        b.setBounds(30,50,80,30);
        f.add(b);
        f.setSize(300,300);
        f.setLayout(null);
        f.setVisible(true);
    }
    public static void main(String[] args) {
        AWT2 obj = new AWT2();
    }
}
