import java.util.Scanner;
public class digitsofanumber {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Number: ");
        int n = sc.nextInt();
        int count = 0;
        for(int i =0;i<20;i++){
            n = n/10;
            count++;
            if(n==0) break;
        }
        System.out.println("Number of digits: "+count);
    }
}
