import java.util.Scanner;

public class Main{
    String name;
    int m1, m2, m3, total;

    public void accept(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter name: ");
        name = in.nextLine();
        System.out.print("Enter Subject 1 Marks: ");
        m1 = in.nextInt();
        System.out.print("Enter Subject 2 Marks: ");
        m2 = in.nextInt();
        System.out.print("Enter Subject 3 Marks: ");
        m3 = in.nextInt();
    }

    public void compute(){
        if(m1>49 && m2>49 && m2>49)
            total = (m1 + m2 + m3);
        else
            total = 0;
    }

    public void display(){
        System.out.println("Name: " +  name);
        System.out.println("Subject 1 marks: " + m1);
        System.out.println("Subject 2 marks: " + m2);
        System.out.println("Subject 3 marks: " + m3);
        System.out.println("Total Marks: " + total);
    }

    public static void main(String args[]){
        Main obj = new Main();
        obj.accept();
        obj.compute();
        obj.display();
    }
}

