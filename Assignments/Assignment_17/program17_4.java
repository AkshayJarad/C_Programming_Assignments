
class Logic
{
    void findMin(int iNo1 ,int iNo2, int iNo3)
    {
        if(iNo1 > iNo2 && iNo1 > iNo3)
        {
            System.out.println(iNo1+" is greater than "+iNo2+" and "+iNo3);
        }
        else if(iNo2 > iNo1 && iNo2 > iNo3)
        {
            System.out.println(iNo2+" is greater than "+iNo1+" and "+iNo3);
        }
        else
        {
            System.out.println(iNo3+" is greater than "+iNo1+" and "+iNo2);
        }
    }
}

class program17_4
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}