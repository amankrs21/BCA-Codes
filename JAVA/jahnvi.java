import java.awt.*;
import java.awt.event.*;

public class jahnvi{
    // TextField tf;
    Frame f;
    jahnvi(){
        f = new Frame("Login page");
        f.setVisible(true);
        f.setSize(300,250);
        f.setLayout(null);

        Label a1 = new Label("User Name");
        Label a2 = new Label("Password");
        a1.setBounds(50, 60, 80, 30);
        a2.setBounds(50, 100, 80, 30);

        TextField t1=new TextField(30);
        TextField t2=new TextField(30);
        t1.setBounds(150, 60, 100, 20);
        t2.setBounds(150, 100, 100, 20);
        t2.setEchoChar('*');

        Button b1=new Button("Login In");
        b1.setBackground(Color.yellow);
        b1.setBounds(100,170,80,30);

        f.add(a1);f.add(t1);
        f.add(a2);f.add(t2);
        f.add(b1);
    }
    public static void main(String[] args) {
        new jahnvi();
    }
}
