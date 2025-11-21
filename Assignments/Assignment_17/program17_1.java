
class Logic
{
    void sumOfDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            iSum = iSum + iDigit;
        }
        System.out.println(iSum);
    }
}

class program17_1
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}