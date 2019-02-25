import java.util.Scanner;

class DecToBin{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number : ");
		int num=sc.nextInt();
		int n=num;
		String b="";
		while(n>0)
		{
			if(n%2==0)
				b+="0";
			else
				b+="1";
			n/=2;
		}
		String rev="";
		for(int i=b.length()-1;i>=0;i--)
			rev+=b.charAt(i);
		System.out.println("Decimal : "+num+"\tBinary : "+rev);
	}
}
