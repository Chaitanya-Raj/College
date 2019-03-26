import java.util.Scanner;

public class tryBlocks {

    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(System.in);
            int a, b;
            System.out.println("Input numbers to be operated on : ");
            a = sc.nextInt();
            b = sc.nextInt();
            sc.close();
            try {
                System.out.println(a + "/" + b + "=" + (a / b));
            } catch (Exception e) {
                System.out.println("In inner try block --- throwing exception to outer block");
                throw e;
            }
        } catch (Exception e) {
            System.out.println("In outer try block");
            System.out.println(e);
        }
    }
}