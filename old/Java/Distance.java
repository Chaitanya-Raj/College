import java.util.Scanner;

class Distance{
	static long feet;
	static float inches;
	static float metre;
	Distance(){
		feet=0;
		inches=0;
	}
	Distance(int m){
		feet=(int)m*3.37;
	}
	Distance(Distance t){
			feet=t.feet;
			inches=t.inches;
		}
	static void print(Distance t){
		System.out.println("The Distance in Imperial units is "+feet+"\' "+inches+"\"");
	}
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int x;
		System.out.println("Enter the distance in Metre : ");
		x=sc.nextInt();
		Distance d=new Distance(x);
		print(d);
	}
}