class UseOvrload
{
    void f(int n1, int n2 , int n3)
    {
        System.out.println("\nINSIDE   f(int , int , int) ");
        System.out.println("\nNumbers are :");
        System.out.println( n1 + " " + n2 + " " + n3 );
    }

    void f( double n1 , double n2 )
    {
        System.out.println("\nINSIDE   f(double , double) ");
        System.out.println("\nNumbers are: ");
        System.out.println( n1 + " " + n2 );
    }

    void f( char c , int... v)
    {
        System.out.println("\nINSIDE   f( char , int ...v) ");

        System.out.print("\n Entered character is : ");

        System.out.println( c);

        System.out.println("\n length of variable length argument is : " + (v.length) + "\n The integers are" );

        for(int x : v)
        System.out.println( x + "  " );
    }
}

class Ovrload
{
    public static void main( String args[] )
    {  
        UseOvrload ob1= new UseOvrload();

        System.out.println("\n\nACTUAL   PARAMETERS  ARE : ");
        ob1.f(3,2);

        System.out.println("\n");

        System.out.println("\nACTUAL PARAMETERS ARE :  " );       
        ob1.f(3,2,1);

        System.out.println("\n");

        System.out.println("\nACTUAL PARAMETERS ARE : " );
        ob1.f(4.56 ,6.54);

        System.out.println("\n");

        System.out.println("\nACTUAL  PARAMETERS ARE : "); 
        ob1.f(3, 4f);

        System.out.println("\n");

        System.out.println("\nACTUAL PARAMETERS ARE : " );
        ob1.f('B',2,3,4);
    }
}
