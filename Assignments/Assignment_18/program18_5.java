
class Logic
{
    void checkSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Number is positive");
        }
        else if(num < 0)
        {
            System.out.println("Number is negative");
        }
        else
        {
            System.out.println("Number is negative");
        }
    }
}

class program18_5
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}