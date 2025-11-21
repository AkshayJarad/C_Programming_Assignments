
class Logic
{
    void findMax(int iNo1 ,int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println(iNo1+" is greater than "+iNo2);
        }
        else
        {
            System.out.println(iNo2+" is greater than "+iNo1);
        }
    }
}

class program17_3
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}