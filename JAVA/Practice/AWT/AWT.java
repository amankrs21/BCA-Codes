// Program to understand use of AWT by extends method

import java.awt.*;

public class AWT extends Frame{
    AWT(){
        Button b = new Button("Click Me");
        b.setBounds(30,100,80,30);
        add(b);
        setSize(300,300);
        setLayout(null);
        setVisible(true);
    }
    public static void main(String[] args) {
        AWT obj = new AWT();
    }
}
