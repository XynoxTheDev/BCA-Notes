class arrayBound
{
    public static void main(String[] args)
    {
        int a[] = {5, 10}, b = 5;

        try
        {
            int x = a[2]/b-a[1];
        }

        catch(ArithmeticException e)
        {
            System.out.println("\n\nDivision is zero");
        }

        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("\n\nArray index out of bounds");
        }
    }
}