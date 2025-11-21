
class Logic
{
    void checkEvenOdd(int iNo)
    {
        if(iNo % 2 == 0)
        {
            System.out.println("Number is Even");
        }
        else
        {
            System.out.println("Number is Odd");
        }
    }
}

class program16_2
{
    public static void main(String ar[])
    {
        Logic obj = new Logic();
        obj.checkEvenOdd(7);
    }
}