class calculate
{
    void sum(int a, int b)
    {
        System.out.println("Sum1: " + (a + b));
    }

    void sum(float a, float b)
    {
        System.out.println("Sum2: " + (a + b));
    }
    public static void main(String args[])
    {
        calculate cal = new calculate(); //object creation
        cal.sum(10, 20);
        cal.sum(10.5f, 20.5f);
    }
}