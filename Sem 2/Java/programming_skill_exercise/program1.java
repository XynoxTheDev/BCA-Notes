import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

abstract class Parent{
    String self;
    String name;
    int age;
    String designation;
    
    public void print(JLabel text){
        String value = String.format("<html>This is the %s<br/>Name: %s<br>Age: %d<br>Designation: %s<html>", 
                self, name, age, designation);
        text.setText(value);
    }
}

class Father extends Parent{
    Father(String n, int a, String d){
        self = "Father";
        name = n;
        age = a;
        designation = d;
    }
}

class Mother extends Parent{
    Mother(String n, int a, String d){
        self = "Mother";
        name = n;
        age = a;
        designation = d;
    }
}

public class program1{

    public static void main(String[] args) {
        Father f = new Father("Rajesh", 40, "CEO"); 
        Mother m = new Mother("Sunita", 35, "HouseWife"); 

        // JFrame.setDefaultLookAndFeelDecorated(true);
        JFrame frame=new JFrame();
          
        JLabel body_text = new JLabel();
        body_text.setBounds(50, 170, 400, 200);
        body_text.setFont(new Font("Serif", Font.BOLD, 20));

        JButton father_button=new JButton("Father");
        father_button.setBounds(50, 80, 100, 40);
        father_button.setFont(new Font("Serif", Font.BOLD, 15));
        father_button.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                f.print(body_text);
            }
        });

        JButton mother_button=new JButton("Mother");
        mother_button.setBounds(250, 80, 100, 40);
        mother_button.setFont(new Font("Serif", Font.BOLD, 15));
        mother_button.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                m.print(body_text);
            }
        });
                  
        frame.add(father_button);
        frame.add(mother_button);
        frame.add(body_text);
                  
        frame.setSize(400,500);
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}
