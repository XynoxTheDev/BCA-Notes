class addsub
{
    int a=20, b=10;
    
    void display()
    {
        System.out.println("\n\nNo. 1: " + a);
        System.out.println("\nNo. 2: " + b);
    }

    void add()
    {
        System.out.println("\n\nAddition: " + (a+b));
    }

    void sub()
    {
        System.out.println("\n\nSubtraction: " + (a-b));
    }
}

class multdiv extends addsub
{
    void mul()
    {
        System.out.println("\n\nMultiplication: " + (a*b));
    }

    void div()
    {
        System.out.println("\n\nDivision: " + (a/b));
    }
}

class test
{
    public static void main(String args[])
    {
        multdiv obj = new multdiv();
        obj.display();
        obj.add();
        obj.sub();
        obj.mul();
        obj.div();
    }
}
