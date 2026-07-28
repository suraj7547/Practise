import java.util.Scanner;

public class area_of_rectangle{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("");
        System.out.print("Enter the length of the rectangle: ");
        int length = scanner.nextInt();
        System.out.print("Enter breadth of the rectangle: ");
        int breadth = scanner.nextInt();
        int area = length * breadth;
        System.out.println("Area of the reactangle: "+area);
        scanner.close();
    }
}