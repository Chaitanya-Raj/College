import java.util.Scanner;

public class exc {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a,b;
        System.out.println("\nEnter the dividend : ");
        a=sc.nextInt();
        System.out.println("\nEnter the divisor : ");
        b=sc.nextInt();
        try {
            System.out.println(a+"/"+b+"="+(a/b));
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}