
class Logic
{
    void calculatePower(int base, int exp)
    {
        int iCnt = 0;
        int ipower = 1;

        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            ipower = ipower * base;
        }
        System.out.println(ipower);
    }
}

class program19_5
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2,5);
    }
}