import java.util.Scanner;
public class AP2 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        for(int i =4; i<=3*n+1;i+=3) System.out.print(i+" ");
    }
}
