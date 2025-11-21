
class Logic
{
    void printTable(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iNo+" * "+iCnt+" = "+iNo * iCnt);
        }
    }
}

class program17_5
{
    public static void main(String ar[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}