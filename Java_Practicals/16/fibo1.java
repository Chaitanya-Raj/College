package p;
import java.util.Scanner;
class fibo1
{
    public static void main(String args[])
    {
        int j,res;	
        System.out.println("enter the number");
        Scanner s=new Scanner(System.in);
        int x=s.nextInt();
        fibonacci f=new fibonacci();

        System.out.println("series through recursion: ");
        for( j=0; j<x; j++)
        {
            res = f.fibo(j);
            System.out.println(res + " \n " );
        }
        System.out.println(" series through iteration" + " " );
        f.fibor(x);
    }
}