import java.util.Scanner;

public class DivideByZero1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        System.out.println("\nEnter the dividend : ");
        a = sc.nextInt();
        System.out.println("\nEnter the divisor : ");
        b = sc.nextInt();
        sc.close();
        try {
            if (b == 0) {
                throw new ArithmeticException("Division by Zero is not defined.");
            } else {
                System.out.println("\n" + a + "/" + b + "=" + (a / b));
            }
        } catch (ArithmeticException e) {
            System.out.println("\n" + e);
        }
    }
}