import java.util.*;

class Logic
{
    public void checkPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            System.out.println("It is a perfect number");
        }
        else
        {
            System.out.println("It is not a perfect number");
        }
    }
}

class program20_3
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}