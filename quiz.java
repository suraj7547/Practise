import java.util.*;

public class quiz {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of a: ");
        int a=sc.nextInt();
        System.out.print("Enter the value of b: ");
        int b = sc.nextInt();
        int total=(a*b)/(a-b);
        System.out.println("Answer: "+total);
        sc.close();
    }
}