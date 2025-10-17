import java.util.Scanner;
class Management
{
        Scanner sc = new Scanner (System.in);
        int n; 
        int id[], roll[];
        String name[];
        char grade[];
        double mark1[], mark2[], mark3[], total[];
        void accept()
        {
            System.out.println("Enter the number of students");
            n = sc.nextInt();
            String name[] = new String [n];
            int id[] = new int [n];
            int roll[] = new int[n];
            char grade[] = new char[n];
            double mark1[] = new double[n];
            double mark2[] = new double[n];
            double mark3[] = new double[n];
            double total[] = new double[n]; 
            System.out.println("Enter all of the students' name, id and roll number in the following order");
            for(int i = 0; i < n; i++)
            {
                name[i] = sc.nextLine();
                id[i] = sc.nextInt();
                roll[i] = sc.nextInt();
            }
            System.out.println("Now, enter each students' best 3 scoring subjects' marks in the same order as above");
            for(int i = 0; i < n; i++)
            {
                mark1[i] = sc.nextDouble();
                mark2[i] = sc.nextDouble();
                mark3[i] = sc.nextDouble();
            }
        }
        void calculate()
        {
            for(int i = 0; i < n; i++)
            {
                total[i] = (mark1[i] + mark2[i] + mark3[i]) / 3.0;
                for(int j = i; j < n; j++)
                {
                    if(total[i] >= 85)
                    {
                        grade[i] = 'A';
                    }
                    else if(total[i] < 85 && total[i] >= 70)
                    {
                        grade[i] = 'B';
                    }
                    else if(total[i] < 70 && total[i] >= 60)
                    {
                        grade[i] = 'C';
                    }
                    else
                    {
                        grade[i] = 'F';
                    }
                }
            }
        }
        void display()
        {
            for(int i = 0; i < n; i++)
            {
                System.out.println("This student's name is "+ name[i]);
                System.out.println("This student's ID is "+ id[i]);
                System.out.println("This student's roll number is "+ roll[i]);
                System.out.println("This student's first subject mark is "+ mark1[i]);
                System.out.println("This student's second subject mark is "+ mark2[i]);
                System.out.println("This student's third subject mark is "+ mark3[i]);
                System.out.println("This student's total percentage is "+ total[i]);
                System.out.println("This student's grade is "+ grade[i]);
            }
            System.out.println("");
        }
        public static void main (String[] args)
        {
            Management M=new Management();
            M.accept();
            M.calculate();
            M.display();
        }
}