
class Logic
{
    void displayGrade(int marks)
    {
        if(marks > 80 && marks <= 100)
        {
            System.out.println("Grade A");
        }
        else if(marks > 60 && marks <= 80)
        {
            System.out.println("Grade B");
        }
        else if(marks > 35  && marks <= 60)
        {
            System.out.println("Grade C");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}

class program19_2
{
    public static void main(String arg[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}