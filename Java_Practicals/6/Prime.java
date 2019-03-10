import java.util.Scanner;

class Prime{
	public static void main(String args[]){ 
	System.out.println("Enter the number");
	int num;
	Scanner sc=new Scanner(System.in);
	num=sc.nextInt();
	boolean flag=true;
	int m=num/2;
	for (int i=2;i<=m;i++)
	{
		if(num%i==0)
			flag=false;
	}
	if(flag==true)
		System.out.println("Prime number");
	if(flag==false)
		System.out.println("Not a prime number");
	}
}
