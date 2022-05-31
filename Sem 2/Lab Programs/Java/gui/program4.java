import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class program4{

    public static void main(String[] args) {
        // JFrame.setDefaultLookAndFeelDecorated(true);
        JFrame frame=new JFrame();
          
        JLabel body_text = new JLabel("<html>Press any:<br/>m/M, a/A, e/E, n/N</html>");
        body_text.setBounds(100, -15, 200, 200);
        body_text.setFont(new Font("Serif", Font.BOLD, 20));

        frame.addKeyListener(new KeyAdapter(){
            public void keyPressed(KeyEvent e){
                int keyCode = e.getKeyCode();
                switch(keyCode){
                    case 77:    // For m/M key press
                        body_text.setText("Good Morning");
                        break;
                    case 65:    // For a/A key press
                        body_text.setText("Good After Noon");
                        break;
                    case 69:    // For e/E key Press
                        body_text.setText("Good Evening");
                        break;
                    case 78:    // For n/N key press
                        body_text.setText("Good Night");
                        break;
                }
            }
        });

        frame.add(body_text);
                  
        frame.setSize(400,200);
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}

