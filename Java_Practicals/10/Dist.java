import java.util.Scanner;
class Distance
{
    private int feet;
    private double inches;
    Distance(int f,double in)
    {
        feet=f;
        inches=in;
    }
    Distance(Distance ob)
    {
        feet=ob.feet;
        inches=ob.inches;
    }
    void display()
    {
        System.out.println("value of feet:"+feet);
        System.out.println("value of inches:"+inches);
    }
}

class Dist
{
    public static void main(String args[])
    {
        System.out.println("enter the feet");
        Scanner s=new Scanner(System.in);
        int i=s.nextInt();

        System.out.println("enter the inches");
        Scanner s1=new Scanner(System.in);
        double d=s1.nextDouble();

        Distance d1=new Distance(2,4.5);
        System.out.println("showing object 1");
        d1.display();

        Distance d2=new Distance(d1);
        System.out.println("showing object 2");
        d2.display();

        Distance d3=new Distance(i,d);
        System.out.println("showing object 3");
        d3.display();
    }
}