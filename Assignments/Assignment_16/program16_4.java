
class Logic
{
    void reverseNumber(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iRev = (iRev * 10) + iDigit;
        }
        System.out.println(iRev);
    }
}

class program16_4
{
    public static void main(String ar[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}