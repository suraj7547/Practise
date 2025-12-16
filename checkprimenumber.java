import java.util.Scanner;
public class checkprimenumber {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Number: ");
        int n = sc.nextInt();
        boolean flag = true;
        if(n==1) System.out.println("1 is neither prime not composite");
        for(int i =2 ;i<n;i++){
            if(n%i==0){
                flag = false;
                break;
            }
        }
            if(flag == false) System.out.println("Composite Number");
            if(flag == true) System.out.println("Prime Number");
    }
}
