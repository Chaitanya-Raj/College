import java.util.Scanner;
import java.lang.Math;

abstract class Figure{
    Scanner sc=new Scanner(System.in);
    double area;
    abstract void area();
}

class Rectangle extends Figure{
    public void area(){
        System.out.println("Enter the length and breadth of the rectangle :");
        double l=sc.nextDouble();
        double b=sc.nextDouble();
        area=l*b;
        System.out.println("Area of Rectangle : "+area);
    }
}

class Triangle extends Figure{
    public void area(){
        
        System.out.println("Enter the sides of the triangle :");
        double a=sc.nextDouble();
        double b=sc.nextDouble();
        double c=sc.nextDouble();
        double s=(a+b+c)/2;
        area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.println("Area of triangle : "+area);
    }
}

class Abs{
    public static void main(String[] args){
        Figure f=new Rectangle();
        f.area();
        f=new Triangle();
        f.area();
    }
}