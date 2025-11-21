
class Logic
{
    void checkPalindrome(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;
        int iCopy = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iRev = (iRev * 10) + iDigit;
        }

        if(iRev == iCopy)
        {
            System.out.println("Number is Pallindrome");
        }
        else
        {
            System.out.println("Number is not a Pallindrome");
        }
    }
}

class program17_2
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}