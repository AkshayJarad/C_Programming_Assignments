import java.util.*;

class Logic
{
    public void printReverse(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class program20_2
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}