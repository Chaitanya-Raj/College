abc.java File

class Box
{
    int length, breadth,height;
        
    Box()
    {	
        length=1;
        breadth=1;
        height=1;
    }

    Box(int l, int b, int h)
    {
        length=l;
        breadth=b;
        height=h;
    }

    void check(Box ob)
    {	
        if((length==ob.length)||(length==ob.breadth)||(length==ob.height))
        {
            if((breadth==ob.length)||(breadth==ob.breadth)||(breadth==ob.height))
            {
                if((height==ob.length)||(height==ob.breadth)||(height==ob.height))
                {
                    System.out.println("two box are equal");
                }
                else 
                    System.out.println("box are not equal");
            }
            else 
                System.out.println("box are not equal");
        }
        else 
            System.out.println("box are not equal");
    }
}

class Box2
{
    public static void main(String args[])
    {
        Box ob1=new Box(2,3,4);
        Box ob2=new Box(4,3,2);
        ob1.check(ob2);
    }
}

