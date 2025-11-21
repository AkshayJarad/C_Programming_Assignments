
class Logic
{
    void findFactorial(int iNo)
    {
        int iCnt = 0;
        int iFact = 1;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        System.out.println(iFact);
    }
}

class program16_3
{
    public static void main(String ar[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}