
class Logic
{
    void checkDivisible(int num)
    {
        if(num % 5 == 0 && num % 11 == 0)
        {
            System.out.println("number is divisible by 5 and 11");
        }
        else
        {
            System.out.println("number is not divisible by 5 and 11");
        }  
    }
}

class program19_3
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}