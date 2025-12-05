
class Logic
{
    void checkLeapYear(int year)
    {
        if((year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0))
        {
            System.out.println("It is a leap year");
        }
        else
        {
            System.out.println("It is not a leap year");
        }
    }
}

class program19_1
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}