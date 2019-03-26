import java.util.Scanner;

interface stack {
    void push(int x);

    void pop();

    void display();
}

class FixedStack implements stack {
    int arr[] = new int[10];

    int top = 0;

    public void push(int x) {
        if (top == 9) {
            System.out.println("\nStack Overflow!!!");
        } else {
            top = top + 1;
            arr[top] = x;
        }
    }

    public void pop() {
        if (top == 0) {
            System.out.println("\nStack Underflow!!!");
        } else {
            System.out.println("\n" + arr[top]);
            top = top - 1;
        }
    }

    public void display() {
        if (top != 0) {
            System.out.print("\n!!!");
            for (int i = 1; i <= top; i++) {
                System.out.print(" <-" + arr[i]);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        FixedStack s = new FixedStack();
        System.out.println("Welcome to Stack Interface");
        while (true) {
            int op;
            s.display();
            System.out.println("\n1.Push");
            System.out.println("2.Pop");
            System.out.println("3.Exit");
            op = sc.nextInt();
            if (op == 1) {
                System.out.println("Enter the element : ");
                int x = sc.nextInt();
                s.push(x);
            }

            else if (op == 2)
                s.pop();

            else if (op == 3)
                break;

            else
                System.out.println("Invalid Choice");
        }
    }
}