import java.util.Scanner;

public class firstyear{
    String staffname;
    int TOTAL_STUDENT = 3;
    String name[] = new String[TOTAL_STUDENT];
    int marks[] = new int[TOTAL_STUDENT];

    firstyear(){
        staffname = "";
        TOTAL_STUDENT = 0;
    }

    public void accept(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Staff name: ");
        staffname = in.nextLine();
        for(int i=0; i<name.length; i++){
            System.out.print("Enter name of student " + (i+1) + ": ");
            name[i] = in.nextLine();
            System.out.print("Enter marks of student " + (i+1) + ": ");
            marks[i] = in.nextInt();
            in.nextLine();
        }
    }

    public void BestStudent(){
        int hIdx = 0;
        for(int i=1; i<marks.length; i++){
            if(marks[i] > marks[hIdx]){
                hIdx = i;
            }
        }

        System.out.println("Staff Name = " + staffname);
        System.out.println("Highest Marks = " + marks[hIdx]);
        System.out.println("Name of student = " + name[hIdx]);
    }

    public static void main(String args[]){
        firstyear f = new firstyear();
        f.accept();
        f.BestStudent();
    }
}


