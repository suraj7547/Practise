import java.util.Scanner;

public class input{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name=sc.nextLine();
        System.out.print("Enter your age :");
        int age=sc.nextInt();
        System.out.print("Enter your grade: ");
        double grade=sc.nextDouble();
        System.out.print("Are you a student (true/false)?: ");
        boolean isStudent=sc.nextBoolean();
        sc.close();

        //printing the things

        System.out.println("-=-=-=-=-=-=-=-=-=-=-=-");
        System.out.println("-=-=-=-=-=-=-=-=-=-=-=-");

        System.out.println("Hello! "+name);
        System.out.println("Your age is "+age);
        System.out.println("Your grade is "+grade);
        if(isStudent){
            System.out.println("You are enrolled in the classes");
        }
        else 
        {
            System.out.println("You are not enrolled in the classes");
        }
        
    }
}