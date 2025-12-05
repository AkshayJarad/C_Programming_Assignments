
class Logic
{
    void productOfDigits(int num)
    {
        int iDigit = 0;
        int iProduct = 1;

        while(num != 0)
        {
            iDigit = num % 10;
            num = num / 10;

            iProduct = iDigit * iProduct;
        }
        System.out.println(iProduct);
    }
}

class program1_21
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}