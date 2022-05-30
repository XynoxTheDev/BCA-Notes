class month
{
    public static void main(String args[])
    {
        String months[];
        months = new String[13];
        months[0] = null;
        months[1] = "January";
        months[2] = "February";
        months[3] = "March";
        months[4] = "April";
        months[5] = "May";
        months[6] = "June";
        months[7] = "July";
        months[8] = "August";
        months[9] = "September";
        months[10] = "October";
        months[11] = "November";
        months[12] = "December";

        if(args.length == 0)
        {
            System.out.println("\n\nEnter month no. b/w 0-12 in cmd line!");
            System.exit(0);
        }

        int m = Integer.parseInt(args[0]);
        System.out.println("\n\nMonth: " + months[m]);
    }
}