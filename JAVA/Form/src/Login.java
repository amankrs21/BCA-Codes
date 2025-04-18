import javax.swing.*;
public class Login {
    public static void main(String[] args) {
        LoginFrame frame = new LoginFrame();
        frame.setTitle("Login Frame");
        frame.setVisible(true);
        frame.setResizable(false);
        frame.setBounds(10,10,370,600);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
