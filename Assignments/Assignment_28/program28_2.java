import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch1 = '\0', ch2 = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch2 = 'A',ch1 = 'a'; j <= iCol; j++,ch2++,ch1++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(ch1+"\t");
                }
                else
                {
                    System.out.print(ch2+"\t");
                }
                
            }
            System.out.println("\n");
        }
    }
}

class program28_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);


    }
}