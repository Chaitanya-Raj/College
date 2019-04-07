import java.util.Scanner;

class x {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int v, i, j, sum = 0, c = 0;

        System.out.println("Enter number of vertices for a adjancency matrix \n");
        v = sc.nextInt();

        int arr[][] = new int[v][v];
        int arr1[] = new int[v];
        for (i = 0; i < v; i++) {
            for (j = 0; j < v; j++) {
                System.out.println("\n How many edge from " + (char) (97 + i) + " to " + (char) (97 + j) + " - ");
                arr[i][j] = sc.nextInt();
            }
        }

        System.out.println("\n THE ADJANCY MATRIX : \n ");
        for (int m = 0; m < v; m++) {
            for (int n = 0; n < v; n++) {
                System.out.print(arr[m][n] + " ");
            }
            System.out.println();
        }
        int odd = 0;

        for (i = 0; i < v; i++) {
            sum = 0;
            for (j = 0; j < v; j++) {
                sum += arr[i][j];
                if (adj[i][j] % 2 == 1)
                    odd++;
            }
            arr1[i] = sum;
        }

        for (i = 0; i < v; i++) {
            System.out.println("\n THE DEGREE OF " + (char) (97 + i) + " -- " + arr1[i]);
        }

        if (sum % 2 == 0 && odd == 0) {
            System.out.println("\nIt has a Euler Circuit");
        } else if (odd == 2) {
            System.out.println("\nIt has a Euler Path");
        } else {
            System.out.println("\nIt has neither Euler Path nor Circuit");
        }

    }
}