
class Logic
{
    boolean CheckPrime(int num)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (num/2); iCnt++)
        {
            if(num % iCnt == 0)
            {
                return false;
            }
        }
        return true;
    }
}

class program18_1
{
    public static void main(String arg[])
    {
        boolean bRet = false;

        Logic obj = new Logic();
        bRet = obj.CheckPrime(11);

        if(bRet == true)
        {
            System.out.println("It is prime number");
        }
        else
        {
            System.out.println("It is not a prime number");
        }
    }
}