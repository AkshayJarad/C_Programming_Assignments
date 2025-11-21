
class Logic
{
    void calculateSum(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        System.out.println(iSum);
    }
}

class program16_1
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}