import java.util.Scanner;

public class tryBlocks {

    public static void main(String[] args) {
        try {
            Scanner sc=new Scanner(System.in);
            int a,b;
            System.out.println("Input numbers to be operated on : ");
            a=sc.nextInt();
            b=sc.nextInt();
            try {
                System.out.println(a+"/"+b+"="+(a/b));
            } catch (Exception e) {
                System.out.println("Inside inner try block --- throwing to outer block");
                throw e;
            }
        } catch (Exception e) {
            System.out.println("Inside outer try block");
            System.out.println(e);
        }        
    }
}