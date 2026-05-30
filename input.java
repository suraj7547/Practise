import java.util.Scanner;

public class input {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter your name : ");
        String num=sc.nextLine();
        System.out.println("Hello! "+num);
        sc.close();

    }
    
}
