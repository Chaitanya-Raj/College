import  java.util.Scanner;
class Sumnum
{
	public static void main(String args[])
	{
		int sum=0,i;
		Scanner ob=new Scanner(System.in);
		int x=Integer.parseInt(args[0]);


		for( i=1; i<=x; i++)
		{
			System.out.println("enter the number");
			sum=sum+ob.nextInt();
			System.out.println("sum of numbers is:"+sum);
		}
	}
}