import java.util.*;

class Logic
{
    public void sumEvenNumbers(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Sum of even numbers is : "+iSum);
    }
}

class program20_1
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}