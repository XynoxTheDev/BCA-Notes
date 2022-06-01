import javax.swing.*;
import java.awt.event.*;

public class program5{
    public static void main(String args[]){
        // JFrame.setDefaultLookAndFeelDecorated(true);
        JFrame frame = new JFrame();

        JMenuBar menubar=new JMenuBar();

        JMenu menu1=new JMenu("Menu 1");  
        JMenu menu2=new JMenu("Menu 2");  

        JMenuItem i1=new JMenuItem("Item 1");  
        JMenuItem i2=new JMenuItem("Item 2");  
        JMenuItem i3=new JMenuItem("Item 3");  
        JMenuItem i4=new JMenuItem("Item 4");  
        JMenuItem quit = new JMenuItem("Quit");
        quit.addActionListener(new ActionListener(){
          public void actionPerformed(ActionEvent e){
              System.exit(0);
          }
        });

        menu1.add(i1);
        menu1.add(i2);
        menu1.add(quit);

        menu2.add(i3);
        menu2.add(i4);

        menubar.add(menu1);
        menubar.add(menu2);

        frame.setJMenuBar(menubar);
        frame.setSize(400, 400);
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
