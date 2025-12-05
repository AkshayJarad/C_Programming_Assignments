
class Logic
{
    void sumEvenOddDigits(int n)
    {
        int iDigit = 0;
        int SumEven = 0;
        int SumOdd = 0;

        while(n != 0)
        {
            iDigit = n % 10;
            n = n / 10;

            if(iDigit % 2 == 0)
            {
                SumEven = SumEven + iDigit;
            }
            else
            {
                SumOdd = SumOdd + iDigit;
            }
        }
        System.out.println("Sum of Even digits is : "+SumEven);
        System.out.println("Sum of Odd digits is : "+SumOdd);
    }
}

class program18_4
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}