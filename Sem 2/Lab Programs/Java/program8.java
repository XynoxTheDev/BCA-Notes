class arith
{
    public static void main(String[] args)
    {
        int a = 7, b = 0;
        float r;

        try
        {
            r = a/b;
            System.out.println("\n\nResult: " + r);
        }

        catch(ArithmeticException e)
        {
            System.out.println("\n\n B iz zero");
        }

        finally
        {
            System.out.println("\n\nFinally: exception occured or not, I execute always!");
        }
    }
}