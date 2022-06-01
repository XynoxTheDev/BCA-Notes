import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

class Person{
    String name, regno, course, college;
    int age;

    Person(String n, int a, String r, String crs, String clg){
        name = n;
        age = a;
        regno = r;
        course = crs;
        college = clg;
    }

    public void print(JLabel body_text){
        String text = String.format("<html>Name: %s<br>Age: %d<br>Register No: %s<br>Course: %s" +
                                    "<br>College: %s</html>", name, age, regno, course, college);
        body_text.setText(text);
    }
}

public class program2{
    public static void main(String[] args) {
        Person p = new Person("Anurag", 18, "21C01026", "BCA", "Presidency College");

        // JFrame.setDefaultLookAndFeelDecorated(true);
        JFrame frame=new JFrame();
          
        JLabel body_text = new JLabel();
        body_text.setBounds(50, 170, 400, 200);
        body_text.setFont(new Font("Serif", Font.BOLD, 20));

        JButton button=new JButton("Click Me!");
        button.setBounds(120, 90, 120, 40);
        button.setFont(new Font("Serif", Font.BOLD, 15));
        button.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                p.print(body_text);
            }
        });
                  
        frame.add(button);
        frame.add(body_text);
                  
        frame.setSize(400,500);
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}

