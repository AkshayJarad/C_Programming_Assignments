
class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 1; iCnt <= (num/2); iCnt++)
        {
            if(num % iCnt == 0)
            {
                iCount++;
            }
        }
        System.out.println(iCount);
    }
}

class program4_21
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.countFactors(12);
    }
}