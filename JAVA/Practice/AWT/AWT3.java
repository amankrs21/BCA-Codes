// Program to understand the Concept of AWT by implementing ActionListner

import java.awt.*;
import java.awt.event.*;
public class AWT3 extends Frame implements ActionListener{
    TextField tf;
    AWT3(){
        tf = new TextField();
        tf.setBounds(60,50,170,20);
        Button b = new Button(" Click Me ");
        b.setBounds(100,120,80,30);

        // Register Litener
        b.addActionListener(this);

        // add componenets and set size, layout and visibility
        add(b);
        add(tf);
        setSize(300,300);
        setLayout(null);
        setVisible(true);
        
    }
    public void actionPerformed(ActionEvent e){
        tf.setText(" Welcome ");
    }
    public static void main(String[] args) {
        new AWT3();
    }
}
