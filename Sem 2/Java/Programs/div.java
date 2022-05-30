class div
{
    public static void main(String args[])
    {
        int a = 7, b = 2;
        float r;

        try
        {
            r = a/b;
            System.out.println("\n\nResult: " + r);
        }

        catch(ArithmeticException e)
        {
            System.out.println("\n\nB is zero");
        }

        System.out.println("\n\n---End of program---");
    }
}