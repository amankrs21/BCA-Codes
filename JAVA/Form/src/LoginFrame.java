import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

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
        addActionEvent();
    }
    public void setLayoutManager() {
        container.setLayout(null);
    }
    public void setLocationAndSize() {
        user.setBounds(50,150,100,30);
        pass.setBounds(50,220,100,30);
        field.setBounds(150,150,150,30);
        pfield.setBounds(150,220,150,30);
        login.setBounds(50,300,100,30);
        show.setBounds(150,250,150,30);
        reset.setBounds(200,300,100,30);
    }
    public void addComponenetsToContainer() {
        container.add(user);
        container.add(pass);
        container.add(field);
        container.add(pfield);
        container.add(show);
        container.add(login);
        container.add(reset);
    }
    public void addActionEvent() {
        login.addActionListener(this);
        reset.addActionListener(this);
        show.addActionListener(this);
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == login) {
            String userText;
            String passText;
            userText = field.getText();
            passText = pfield.getText();
            if(userText.equalsIgnoreCase("Aman") && passText.equalsIgnoreCase("12345")) {
                JOptionPane.showMessageDialog(this, "Login Successfully");
            }
            else {
                JOptionPane.showMessageDialog(this, "Invalid UserName and Password");
            }
        }
        if(e.getSource()==reset) {
            field.setText("");
            pfield.setText("");
        }
        if(e.getSource()==show) {
            if(show.isSelected()) {
                pfield.setEchoChar((char)0);
            }
            else {
                pfield.setEchoChar('*');
            }
        }
    }
}
