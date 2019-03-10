import java.util.Scanner;

class Distance{
	static final double METERS_PER_INCHES=0.0254;
	static final double FOOT_PER_INCH=0.0833;
	static double dfeet;
	static int feet;
	static int inches;
	Distance(){
		feet=0;
		inches=0;
	}
	Distance(double m){
		dfeet=m*3.28084;
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
		double x;
		System.out.println("Enter the distance in Metre : ");
		x=sc.nextDouble();
		Distance d=new Distance(x);
		d.feet=(int)dfeet;
		d.inches=(int)((dfeet-feet)*12.0);
		print(d);
	}
}