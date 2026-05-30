import java.util.Scanner;

public class mad_libs_game {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("My name is _____. Today I gone to a _____. There I saw a _____. He was looking _____.");

        String s1;
        String s2;
        String s3;
        String s4;

        System.out.println("-=-=-=-=-=-=-=-=-=-");
        System.out.println("-=-=-=-=-=-=-=-=-=-");
        System.out.print("My name is _____.");
        s1=sc.nextLine();
        System.out.print("Today I gone to a _____.");
        s2=sc.nextLine();
        System.out.print("There I saw a _____.");
        s3=sc.nextLine();
        System.out.print("He was looking so ______.");
        s4=sc.nextLine();

        sc.close();

        System.out.println("-=-=-=-=-=-=-=-=-=-");
        System.out.println("Final story");
        System.out.println("-=-=-=-=-=-=-=-=-=-");
        System.out.println("My name is "+s1+". Today I gone to a "+s2+". There i saw a "+s3+". He was looking so "+s4+".");

        
        
    }
}