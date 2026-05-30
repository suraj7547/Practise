import java.util.Scanner;

public class area_of_rectangle {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double area=0;
        double breadth=0;
        double length=0;

        System.out.print("Enter Breadth :");
        breadth=sc.nextDouble();

        System.out.print("Enter length :");
        length=sc.nextDouble();
        sc.close();

        area=length*breadth;  

        System.out.println("Area of rectangle is "+area+"cm²");
    }
}