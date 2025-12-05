import java.util.*;

class Logic
{
    public void findLargestDigit(int iNo)
    {
        int iDigit = 0;
        int iMax = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
        }
        System.out.println("Maximum digit is : "+iMax);

    }
}

class program20_4
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(834298);
    }
}