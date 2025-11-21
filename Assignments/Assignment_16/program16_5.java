
class Logic
{
    void countDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iCount++;
        }
        System.out.println(iCount);
    }
}

class program16_5
{
    public static void main(String ar[])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}