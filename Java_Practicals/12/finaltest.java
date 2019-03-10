import java.util.Scanner;

class finalTest{
	static final double pi=3.14159265;
	public static void area(int r){
		double area;
		area=pi*r*r;
		System.out.println("Area of circle = "+area);
	}
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the radius : ");
		int x=sc.nextInt();
		area(x);
	}
}