import java.util.Scanner;

public class quiz{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Coose your language ");
        System.out.print("1.English/2.Hindi/3.Japanese: ");
        int x = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        if(x==1){
            System.out.println("Hello "+name);
        } else if(x==2){
            System.out.println("Namaste "+name);
        }else if (x==3){
            System.out.println("Bonjoyo "+name);
        }else {
            System.out.println("Invalid input!");
        }
        sc.close();
    }
}