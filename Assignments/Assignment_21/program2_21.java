
class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0;
        int iCountEven = 0;
        int iCountOdd = 0;


        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }
        System.out.println("Count of Even numbers are : "+iCountEven);
        System.out.println("Count of Odd numbers are : "+iCountOdd);
    }
}

class program2_21
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}