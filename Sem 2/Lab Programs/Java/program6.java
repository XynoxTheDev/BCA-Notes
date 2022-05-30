class instance 
{
    static int count=0;
    
    public void increment()
    {
        count++;
    }

    public static void main(String args[]) {
        instance obj1 = new instance();
        instance obj2 = new instance();
        obj1.increment();
        obj2.increment();
        System.out.println("\n\nObj1: " + obj1.count);
        System.out.println("\nObj2: " + obj2.count);
    }

}
