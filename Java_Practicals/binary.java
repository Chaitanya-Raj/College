import java.util.Scanner;
class binary{
    public static void main( String args[] )
    {
        Scanner input= new Scanner(System.in);
        System.out.println("enter a number");
        int[] binarynum=new int [10];
        int n= input.nextInt();
        int i=0;
        while (n>0)
        {
            binarynum[i]=n%2;
            n=n/2;
            i++;
        }
        System.out.println("number in binary");
        for ( int j=i-1;j>=0;j-- )
        {
            System.out.print(binarynum[j]);
        }
    }
} 
