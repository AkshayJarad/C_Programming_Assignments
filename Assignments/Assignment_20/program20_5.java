import java.util.*;

class Logic
{
    public void findSmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iMin = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
        }
        System.out.println("Maximum digit is : "+iMin);

    }
}

class program20_5
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}