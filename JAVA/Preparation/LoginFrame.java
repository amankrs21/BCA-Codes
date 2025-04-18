// Program to Create Form using Swing

import java.awt.*;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
// import jdk.internal.platform.Container;
public class LoginFrame extends JFrame implements ActionListener {

    Container container = getContentPane();
    JLabel user = new JLabel(" UserName : ");
    JLabel pass = new JLabel(" Password : ");
    JTextField field = new JTextField();
    JPasswordField pfield = new JPasswordField();
    JButton login = new JButton("LOGIN");
    JButton reset = new JButton("RESET");
    JCheckBox show = new JCheckBox(" Show Password");
    
    LoginFrame() {
        setLayoutManager();
        setLocationAndSize();
        addComponenetsToContainer();
    }
    public void setLayoutManager() {
        container.setLayout(null);
    }
    public void setLocationAndSize() {
        user.setBounds(50,150,100,30);
        pass.setBounds(50,220,100,30);
        field.setBounds(150,150,150,30);
        pfield.setBounds(150,220,150,150);
        login.setBounds(50,300,100,30);
        reset.setBounds(200,300,100,30);
    }
    public void addComponenetsToContainer() {
        container.add(user);
        container.add(pass);
        container.add(field);
        container.add(pfield);
        container.add(login);
        container.add(reset);
    }
    @Override
    public void actionPerformed(ActionEvent e) {

    }
}