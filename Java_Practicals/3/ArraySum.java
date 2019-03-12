import java.util.Scanner;

class ArraySum{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size");
		int size=sc.nextInt();
		int arr[]=new int[size];
		for(int i=0;i<size;i++)
			arr[i]=sc.nextInt();
		System.out.print("The sum of array is ");
		int avg,sum=0;
		for(int i=0;i<size;i++)
			sum+=arr[i];
		System.out.println(sum);
		avg=sum/size;
		System.out.println("The average of array is "+avg);
	}
}
